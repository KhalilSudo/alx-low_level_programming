#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints any combination of char, int, float, or string
 *             specified in the format string
 *
 * @format: a string containing a combination of formats specifier
 * @...: variable number of arguments, where each argument corresponds to
 *       a format specfier
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	int j = 0;

	va_start(args, format);

	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
			printf(format);
		}
	}
	printf("\n");
	va_end(args);
}
