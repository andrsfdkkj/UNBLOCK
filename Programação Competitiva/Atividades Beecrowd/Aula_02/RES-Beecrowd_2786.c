#include <stdio.h>

int main()
{
    int L,C,T1,T2,aux1;
    //T1 = Lajotas do tipo 1, T2 = Lajotas do tipo 2
    scanf("%d %d",&L,&C);
    
    T1= L*C+(L-1)*(C-1);
    T2=2*(L+C-2);
    
    printf("%d\n%d\n",T1,T2);
    
    return 0;
}
