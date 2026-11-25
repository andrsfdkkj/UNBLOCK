#include <stdio.h>

int main()
{   
    long long int EL, EN, lucro, aux;
    scanf("%lld %lld", &EL, &EN);
    
    lucro = EL - EN + 1;

    aux = (EN - 1) + lucro * lucro;
    printf("%lld\n", aux);
    
    return 0;
}
