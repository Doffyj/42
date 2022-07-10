void   ft_putchar(char c);

void    limit_line(int x)
{
    int cont_limit;

    cont_limit = 2;
    ft_putchar('o');
    while (cont_limit < x)
    {
        ft_putchar('-');
        cont_limit++;
    }
    if (x > 1)
    {
        ft_putchar('o');
    }
    ft_putchar('\n');
}

void    middle_line(int x)
{
    int cont_middle;

    cont_middle = 2;
    ft_putchar('|');
    while (cont_middle < x)
    {
        ft_putchar(' ');
        cont_middle++;
    }
    if (x > 1)
    {
        ft_putchar('|');
    }
    ft_putchar('\n');
}

void    rush(int x, int y)
{
    int cont;

    cont = 2;
    if (x < 0)
        x = x * (-1);
    if (y < 0)
        y = y * (-1);
    if (x == 0 || y == 0)
        return ;
    limit_line(x);
    while (cont < y)
    {
        middle_line(x);
        cont++;
    }
    if (y > 1)
        limit_line(x);
}