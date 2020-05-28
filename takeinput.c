#include<stdio.h>
#include<string.h>

int main(){

    int i; //declare integer
    char c; //declare char
    string s; //declare string
    float f; //declare float
    double d; //declare double
    
    scanf("%d",&i);//take integer from user
    
    scanf("%c",&c);//take char value from user
    
    scanf("%s",&s);//take string from the user
    
    scanf("%f",&f);//take float value from the user
    
    scanf("%lf",&d);//take double value from the user
    
    
    printf("integer: %d\n",i);//printing value of i
    
    printf("char: %c\n",c);//printing value of c
    
    printf("string: %s\n",s);//printing value of s
    
    printf("float: %f\n",f);//printing value of f
    
    printf("double: %lf",d);//printing value of double
    
    return 0;
}
