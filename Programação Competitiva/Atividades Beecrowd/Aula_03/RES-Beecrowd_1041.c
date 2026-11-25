#include <stdio.h>
int main()
{   
    double Xor, You;
    scanf("%lf %lf", &Xor, &You);
    if(Xor == 0.0 && You == 0.0)
        printf("Origem\n");
    else if(Xor == 0.0) 
        printf("Eixo Y\n");
    else if (You == 0.0)
        printf("Eixo X\n");
    else if(Xor > 0 && You > 0)
        printf("Q1\n");
    else if(Xor < 0 && You > 0)
        printf("Q2\n");
    else if(Xor < 0 && You < 0)
        printf("Q3\n");
    else
        printf("Q4\n");
    return 0;
    
}
