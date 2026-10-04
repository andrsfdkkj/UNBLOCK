#include <stdio.h>
int main()
{
    int L,D,K,P,RES,aux1;
    
    scanf("%d %d\n%d %d",&L,&D,&K,&P);
    
    aux1= L/D;
    
    RES=(K*L)+(aux1*P);
    
    printf("%d\n",RES);
    
    return 0;
}
