unsigned int binary_to_uint(const char *b)
{
    unsigned int i = 0;
    int length = 0;
    unsigned int power;
    unsigned int result = 0;

    while (b[length] != '\0')
    {
        length++;
    }
    power = length - 1;

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '1')
        {
            result += 1 << power;
        }
        power--;
    }
    return result;
}