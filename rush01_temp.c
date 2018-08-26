#include <stdio.h>
void rush(int a, int b)
{
    int i;
    int j;
    
    i = a;
    
    while (i > 0)
    {
        j = b;
        while (j > 0)
        {
            ft_print_str(i, j, a, b);
            j--;
            
        }
        ft_putchar('\n');
        i--;
    }
}

void ft_print_str(int i, int j, int a, int b)
{
    if (j == b)
    {
        if (i == a)
        {
            ft_putchar('/');
        }
        else if (i == 1)
        {
            ft_putchar('\\');
        }
        else
        {
            ft_putchar('*');
        }
    }
    if (j == 1)
    {
        if (i == a)
        {
            ft_putchar('\\');
        }
        else if (i == 1)
        {
            ft_putchar('/');
        }
        else
        {
            ft_putchar('*');
        }
    }
    else if (i == a || i == 1)
    {
        ft_putchar('*');
    }
    else
    {
        ft_putchar(' ');
        
    }
}

void ft_putchar (char c){
    
    printf("%d",&c);
}

int main()
{
    
    
    
    return 0;
}
