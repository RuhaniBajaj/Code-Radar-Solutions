#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    char n;
    scanf("%c", &n);
    switch(n)
    {
        case '+':
        printf("%d", a+b);
        break;
        case '-':
        printf("%d", a-b);
        break;
        case '*':
        printf("%d", a*b);
        break;
        case '/':
        if(b!=0){
           printf("%d", a/b);
        }
        else{
           printf("error");
        }
        break;
        default:
        printf("error\n");
        break;
    }
    return 0;
}