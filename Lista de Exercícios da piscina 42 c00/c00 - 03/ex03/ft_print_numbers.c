#include <unistd.h>

void ft_print_numbers(void)
{
    int i;

    i = '0';

    while (i <= '9')
    {
        write(1,&i,1);
        if(i != '9')
        {
            write(1," - ",3);
        }
        i++;
    }
    
}
