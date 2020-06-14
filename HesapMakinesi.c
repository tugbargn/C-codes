#include<stdio.h>
int main(){
    
    int first,second;
    char operation;
    
    printf("Please enter first number:\n");
    scanf("%d",&first);
    
    printf("Please enter second number:\n");
    scanf("%d",&second);
    
    printf("Please enter operation:\n");
    scanf("%c",&operation);
    
    switch(operation){
        case +:
            printf("%d",first + second);
            break;
        case -:
            printf("%d",first - second);
            break;
        case /:
            printf("%d",first / second);
            break;
        case *:
            printf("%d",first * second);
            break;
        case %:
            printf("%d",first % second);
            break;
        default:
            printf("Invalid process\n");
        
    }
    return 0;
}
