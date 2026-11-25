#include <stdio.h>

int main()
{   // andro = entrada, vitra = res final
    double andro,vitra;
    
    scanf("%lf",&andro);
    
    if(andro >= 0.00 && andro <= 2000.00){
        
        printf("Isento\n");
    }
    
    else if(andro >= 2000.01 && andro <= 3000.00){
        vitra = (andro - 2000.00) * 0.08;
        printf("R$ %.2lf\n",vitra);
        
    }
    
    else if(andro >= 3000.01 && andro <= 4500.00){
            
        vitra = 1000.00 * 0.08 + (andro - 3000.00) * 0.18;
        printf("R$ %.2lf\n", vitra);
        
    }
    
    else{
        vitra = 1000.00 * 0.08 + 1500 * 0.18 + (andro - 4500)*0.28;
        printf("R$ %.2lf\n", vitra);
    }
    
    
    return 0;
}
