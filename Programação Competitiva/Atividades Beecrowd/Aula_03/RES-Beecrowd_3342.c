#include <stdio.h>

int main()
{
    int n,aux,brancas,pretas;
    
    scanf("%d",&n);
    
    n = n*n;
    
    if(n%2 == 0){
            
        brancas = n/2;
        pretas = n/2;
            
    }
    else{
            
        brancas = (n+1)/2;
        pretas = (n-1)/2;
            
    }
    printf("%d casas brancas e %d casas pretas\n",brancas,pretas);

    return 0;
}
