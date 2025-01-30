#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f %f", &a,&b);
    char n;
    scanf("%c", &n);
    switch(n)
    {
        case '+':
        printf("%f", a+b);
        break;
        case '-':
        printf("%f", a-b);
        break;
        case '*':
        printf("%f", a*b);
        break;
        case '/':
        if(b!=0){
           printf("%f", a/b);
        }
        else{
           printf("error\n");
        }
        break;
        default:
        printf("error\n");
        break;
    }
    return 0;
}