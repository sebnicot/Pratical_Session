#include <stdio.h>

int main()
{
    int array[5] = {4, 8, 20, 32, 43};
    int i = 0;
    int v = 32;
    for (i = 0; i<5; i++)
    {
        if (array[i] == v)
        {
            printf("La valeur trouvee est %d, c'est la valeur %d dans le tableau.", v, i+1);
        }
    }
    return 0;
}
