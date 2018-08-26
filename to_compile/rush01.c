#include <unistd.h>

void ft_putchar (char c) {
	write (1, &c, 1);
}

int        get_row_index(int x, int y, int i)
{
    int row;
    
    row = (int)i / x;
    if (row == 0)
    {
        return (0);
    }
    else if (row == y - 1)
    {
        return (2);
    }
    else
    {
        return (1);
    }
}

int        get_char_index(int x, int i)
{
    int pos_in_row;
    
    pos_in_row = i % x;
    if (pos_in_row == 0)
    {
        return (0);
    }
    else if (pos_in_row == x - 1)
    {
        return (2);
    }
    else
    {
        return (1);
    }
}

char    base(int a, int b)
{
    char base_matrix[3][3];
    
    base_matrix[0][0] = '/';
    base_matrix[0][1] = '*';
    base_matrix[0][2] = '\\';
    base_matrix[1][0] = '*';
    base_matrix[1][1] = ' ';
    base_matrix[1][2] = '*';
    base_matrix[2][0] = '\\';
    base_matrix[2][1] = '*';
    base_matrix[2][2] = '/';
    return (base_matrix[a][b]);
}

void    rush(int x, int y)
{
    int i;
    int row_index;
    int char_index;
    int symbol;
    
    if (x <= 0 || y <= 0)
        return ;
    else
    {
        i = 0;
        while (i < x * y)
        {
            row_index = get_row_index(x, y, i);
            char_index = get_char_index(x, i);
            symbol = base(row_index, char_index);
            if (char_index == 0 && i != 0)
                ft_putchar('\n');
            ft_putchar(symbol);
            i++;
        }
        ft_putchar('\n');
    }
}


int main(void) {
	rush(-1, 4);
	return 0;
}

