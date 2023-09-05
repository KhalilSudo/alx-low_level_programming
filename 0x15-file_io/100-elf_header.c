#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>


/**
 * struct ElfHeader - ELF header structure
 * @e_ident:   ELF identification bytes
 * @e_type:    Object file type
 * @e_machine: Target architecture
 * @e_version: ELF header version
 * @e_entry:   Entry point address
 * @e_phoff:   Program header offset
 * @e_shoff:   Section header offset
 * @e_flags:   Processor-specific flags
 * @e_ehsize:  ELF header size
 * @e_phentsize: Size of program header entry
 * @e_phnum:   Number of program header entries
 * @e_shentsize: Size of section header entry
 * @e_shnum:   Number of section header entries
 * @e_shstrndx: Section header string table index
 */
typedef struct
{
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint32_t e_entry;
    uint32_t e_phoff;
    uint32_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} ElfHeader;

/**
 * display_elf_header_info - Display ELF header information
 * @header: Pointer to the ELF header structure
 */
void display_elf_header_info(ElfHeader *header) {
    printf("Magic: ");
    for (int i = 0; i < 16; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass: %d-bit\n", header->e_ident[4] == 1 ? 32 : 64);
    printf("Data: %s\n", header->e_ident[5] == 1 ? "Little Endian" : "Big Endian");
    printf("Version: %d (current)\n", header->e_version);
    printf("OS/ABI: %d\n", header->e_ident[7]);
    printf("ABI Version: %d\n", header->e_ident[8]);
    printf("Type: %d\n", header->e_type);
    printf("Entry point address: 0x%x\n", header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error");
        exit(98);
    }

    ElfHeader header;
    if (read(fd, &header, sizeof(ElfHeader)) != sizeof(ElfHeader)) {
        fprintf(stderr, "Error: Unable to read ELF header\n");
        close(fd);
        exit(98);
    }

    if (header.e_ident[0] != 0x7F || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F') {
        fprintf(stderr, "Error: Not a valid ELF file\n");
        close(fd);
        exit(98);
    }

    display_elf_header_info(&header);
    close(fd);

    return (0);
}
