#include <stdio.h>

int main()
{
    int bolinha, galio, faltam;

    scanf("%d %d", &bolinha, &galio);

    faltam = galio / 2 - bolinha;

    if (faltam > 0) {
        printf("Faltam %d bolinha(s)\n", faltam);
    }
    else {
        printf("Amelia tem todas bolinhas!\n");
    }

    return 0;
}
