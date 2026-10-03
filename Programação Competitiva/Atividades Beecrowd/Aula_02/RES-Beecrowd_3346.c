#include <stdio.h>

int main()
{
    double f1,f2, res;
    
    scanf("%lf %lf",&f1,&f2);
    
    res = (100+f1)*(f2/100+1)-100;
    
    
    printf("%.6lf\n",res);
    
    
    
    return 0;
}
