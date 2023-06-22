#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
    if(n == 0)
    {
        return (0);
    }
    va_list args;
    unsigned int i,sum;

    va_start(args,n);

    for(i = 0; i<n; i++)
    {
        sum += va_arg(args,n);
    }

    va_end(args);

    return (num);
}