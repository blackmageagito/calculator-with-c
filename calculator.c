
#include <stdio.h>
#include <stdlib.h>

float sum(float a, float b);

float difference(float a, float b);

float multiplication(float a, float b);

float division(float a, float b);


int main()
{
    char mode;
    float x,y;
    
    while(1){
        printf("\n\t Menu");
        printf("\n\t Type the operation (Ex.: 1+1) or type 'ep' to exit the program: ");
        scanf("\n%f", &x);
        fflush(stdin);
        
        scanf("%c", &mode);
        
        scanf("\n%f", &y);
        fflush(stdin);
        
        if(mode=='+'){
            sum( x,  y);
        }else if(mode=='-'){
            difference( x,  y);
        }else if(mode=='*'){
            multiplication( x,  y);
        }else if(mode=='/'){
            division( x,  y);
        }else if (mode =='e'){
            return 0;
        }else{
            printf("\n\t    Please, insert a valid operation.\n");
        }
    }
    return 0;
}

float sum(float a, float b){
    printf("\n  The sum is: %.2f\n",a+b);
}

float difference(float a, float b){
    printf("\n  The difference is: %.2f\n",a-b);
}

float multiplication(float a, float b){
    printf("\n  The multiplication is: %.2f\n",a*b);
}

float division(float a, float b){
    printf("\n  The division is: %.2f\n",a/b);
}



