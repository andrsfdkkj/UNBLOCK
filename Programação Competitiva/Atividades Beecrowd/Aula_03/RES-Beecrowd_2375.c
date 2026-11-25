#include <stdio.h>

int main()

{   int diametro, altura, largura, profund, res;
    scanf("%d\n%d %d %d", &diametro, &altura, &largura, &profund);
    
    if(diametro <= altura && diametro <= largura && diametro <= profund)
        
        printf("S\n");
        
    else
        printf("N\n");
     
    
    return 0;
}
