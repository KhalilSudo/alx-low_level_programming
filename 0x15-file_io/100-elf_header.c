#include "main.h"

/*
 * e_ident[] - IDENTIFICATION INDEXES
 *
 * Description: The initial bytes mark the file as an object file
 *              and provide machine-independent data.
 * The initial bytes of an ELF header (and an object file)
 *  correspond to the e_ident member.
*/

/**
 * elf_checker - checks if file is an ELF file by checking if it
 *                contains the magic numbers/file signature of an ELF file
 *
 * @e_ident: a pointer to an array of bytes specifies
 *           how to interpret the file
 *
 * Return: nothing
*/
void elf_checker(unsigned char *e_ident)
{
	unsigned char elf_magic[] = {0x7F, 'E', 'L', 'F'};
	int index;

	for (index = 0; index < 4; index++)
    {
        if (e_ident[index] != elf_magic[index])
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * display_magic - prints the magic numbers of the ELF file
 *
 * @e_ident: a pointer to an array of bytes specifies
 *           how to interpret the file
 *
 * Return: nothing
*/
void display_magic(unsigned char *e_ident)
{
    printf("  Magic    ");

    for (int index = 0; index < EI_NIDENT; index++)
    {
        printf("%02x%s", e_ident[index], (index == EI_NIDENT - 1) ? "\n" : " ");
    }
}

/**
 * display_class - prints the class of the ELF file
 *
 * @e_ident: a pointer to an array of bytes specifies
 *           how to interpret the file
 *
 * Return: nothing
*/
void display_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS]) /*EI_CLASS - File class*/
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * display_data - prints the data encoding of the ELF file
 *
 * @e_ident: a pointer to an array of bytes specifies
 *           how to interpret the file
 *
 * Return: nothing
*/
void display_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA]) /*EI_DATA - Data encoding*/
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * display_version - print the version of the ELF file
 *
 * @e_ident: a pointer to an array of bytes specifies
 *           how to interpret the file
 *
 * Return: nothing
*/
void display_version(unsigned char *e_ident)
{
    printf("  Version:                           %d", e_ident[EI_VERSION]);

    if (e_ident[EI_VERSION] == EV_CURRENT)
        printf(" (current)\n");
    else
        printf("\n");
}

/**
 * display_osabi - prints the OS/ABI of the ELF file
 *
 * @e_ident: a pointer to an array of bytes specifies
 *           how to interpret the file
 *
 * Return: nothing
*/
void display_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");

    switch (e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
        case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
        case ELFOSABI_ARM: printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
        default: printf("<unknown: %x>\n", e_ident[EI_OSABI]);
    }

}

/**
 * display_abi - prints the Application Binary Interface of the ELF file
 *
 * @e_ident: a pointer to an array of bytes specifies
 *           how to interpret the file
 *
 * Return: nothing
*/
void display_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
		e_ident[EI_ABIVERSION]); /*EI_ABIVERSION = ABI version*/
}

/**
 * display_type - prints the type of the ELF file
 *
 * @e_type: the object file type
 * @e_ident: a pointer to an array of bytes specifies
 *           how to interpret the file
 *
 * Return: nothing
*/
void display_type(unsigned int e_type, unsigned char *e_ident)
{
    if (e_ident[EI_DATA] == ELFDATA2MSB)
        e_type >>= 8;

    printf("  Type:                              ");

    switch (e_type)
    {
        case ET_NONE: printf("NONE (Unknown type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("<unknown: %x>\n", e_type);
    }
}


/**
 * display_entry - prints the entry point of an ELF file
 *
 * @e_entry: the virtual memory address from where the
 *           process starts executing
 *
 * @e_ident: a pointer to an array of bytes specifies
 *           how to interpret the file
 *
 * Return: nothing
*/
void display_entry(unsigned long int e_entry, unsigned char *e_ident)
{
    printf("  Entry point address:               ");

    if (e_ident[EI_DATA] == ELFDATA2MSB)
    {
        e_entry = ((e_entry << 8) & 0xFF00FF00) |
                  ((e_entry >> 8) & 0xFF00FF);
        e_entry = (e_entry << 16) | (e_entry >> 16);
    }

    if (e_ident[EI_CLASS] == ELFCLASS32)
    {
        printf("0x%08x\n", (unsigned int)e_entry);
    }
    else
    {
        printf("0x%016lx\n", e_entry);
    }
}
void close_f(int elf_file)
{
	if (close(elf_file) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf_file);
		exit(98);
	}
}

/**
 * main - Entry point
 *
 * Description: elf_header_parser file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (success)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *elf;
	int elf_file, read_file;

	elf_file = open(argv[1], O_RDONLY);
	if (elf_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	elf = malloc(sizeof(Elf64_Ehdr));
	if (elf == NULL)
	{
		close_f(elf_file);
		free(elf);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	read_file = read(elf_file, elf, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(elf);
		close_f(elf_file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	elf_checker(elf->e_ident);
	printf("ELF Header:\n");
	display_magic(elf->e_ident);
	display_class(elf->e_ident);
	display_data(elf->e_ident);
	display_version(elf->e_ident);
	display_osabi(elf->e_ident);
	display_abi(elf->e_ident);
	display_type(elf->e_type, elf->e_ident);
	display_entry(elf->e_entry, elf->e_ident);
	free(elf);
	close_f(elf_file);
	return (0);
}