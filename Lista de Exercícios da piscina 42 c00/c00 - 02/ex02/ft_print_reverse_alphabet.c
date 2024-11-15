#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    int i;

    i = 'z';
    while (i >= 'a')
    {
        write(1,&i,1);
        if (i != 'a')
        {
            write(1," - ",3);
        }
        i--;
    } 
}
