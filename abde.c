#include <stdio.h>

int main()
{
    int n, i;
    printf("donne n:");
    scanf("%d", &n);
    int est_premier = 1;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            est_premier = 0;
            break;
        }
    }
    if (est_premier == 1)
    {
        printf("le plue petit diviseur est:1");
        printf("le plue grand diviseur est: %d\n", n);
    }
    else
    {
        int ppd = 1;
        int pgd = 1;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                ppd = i;
                break; // un fois qu'on trouve un element a la fois
                       // le parcour est de petit a grand
                       // ex : donner n:8
                       // on cherche la plus petite valeur
                       // alors on s'arrete dans la premier valeur qui a un mod qui est egale a 0
                       // if (8 % 2 ==0 ) //true
                       // ppd = 2; alors ppd =2
            }
        }
        for (i = n / 2; i >= 2; i--)
        {
            if (n % i == 0)
            {
                pgd = i;
                break; // la meme avec le contraire cette fois le parcour est de grane a petit
            }
        }
        // cas impossible car un nombre non premier ne peut jamais a un ppd ==pgd
        // cas impossible <==> cas inaccessible (unreachable code)
        // if (ppd == pgd)
        // {
        //     printf("le plue petit diviseur =le plue grand diviseur =%d", i);
        // }
        printf("le plue petit diviseur est:%d\nle plue grand diviseur est: %d\n", ppd, pgd);
    }
    return 0;
}