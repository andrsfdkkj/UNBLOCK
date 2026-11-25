#include <stdio.h>

int main()
{
    int s,t,fus,chegada;
  
    scanf("%d%d%d",&s,&t,&fus);

    chegada=((s+t+fus)%24+24)%24;

    printf("%d\n",chegada);

    return 0;
}
