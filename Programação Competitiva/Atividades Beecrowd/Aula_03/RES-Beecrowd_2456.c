#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if(a>b && b>c && c>d && d>e){
        
        printf("D\n");
        
    }
    else if(e>d && d>c && c>b && b>a){
        
        printf("C\n");
    }
    
    else{
        
        printf("N\n");
        
    }
    return 0;
}
