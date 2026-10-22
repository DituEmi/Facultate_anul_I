#include <stdio.h>

int main()
{
    int x;
    int contor = 0;

    scanf("%d", &x);
    while (x > 0)
    {
        printf("OUT: ");
        bool prim = true;

        if (x % 2 == 0 && x != 2)
        {
            prim = false;
        }
        if (x == 1)
        {
            prim = false;
        }
        for (int i = 3; i < x; i += 2)
        {
            if (x % i == 0)
            {
                prim = false;
                break;
            }
        }

        if (prim == true)
        {
            printf("PRIM");
            contor++;
        }

        else
            for (int i = 2; i < x; i++)
            {
                if (x % i == 0)
                    printf("%d ", i);
            }
        printf("\n");

        scanf("%d", &x);
    }

    printf("S-au gasit %d numere prime.\n", contor);

    return 0;
}