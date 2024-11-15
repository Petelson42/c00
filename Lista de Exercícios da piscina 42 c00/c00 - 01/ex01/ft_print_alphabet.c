#include <unistd.h>

void ft_print_alphabet(void)
{
    int i;

    i = 'a';

    while (i <= 'z')
    {
        write(1,&i,1);
        if (i != 'z')
        {
            write(1," - ",3);
        }
        i++;   
    }   
}
