#include <stdio.h>

int main(int ac, char **av)
{
    int i = 0;
    int res = 0;
    int aces = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if ((av[1][i] >= '2' && av[1][i] <= '9') || av[1][i] == 'A' || av[1][i] == 'Q' || av[1][i] == 'K' || av[1][i] == 'J' || av[1][i] == 'D')
            {
                if (av[1][i] >= '2' && av[1][i] <= '9')
                {
                    res += av[1][i] - '0';
                }
                else if (av[1][i] == 'J' || av[1][i] == 'Q' || av[1][i] == 'D' || av[1][i] == 'K' || av[1][i] == 'T')
                {
                    res += 10;
                }
                else if (av[1][i] == 'A' && res < 11)
                {
                    res += 11;
                    aces++;
                }
                else
                {
                    res += 1;
                }
                if (res > 21 && aces > 0)
                {
                    res -= 10;
                }
            }
            else
            {
                printf("Input is invalid. Try using 23456789TJDKA\n");
                return (0);
            }
            i++;
        }
    }
    else
    {
        printf("Only one input is allowed ;(\n");
        return (0);
    }
    if (res == 21)
    {
        printf("Blackjack!\n");
    }
    else
        printf("%i is your score!\n", res);
    return (0);
}