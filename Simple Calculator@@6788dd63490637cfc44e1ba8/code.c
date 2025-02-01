#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    char c;
    scanf("%c", &c);
    switch(c)
    {
        case '+':printf("%d", a+b);break;
        case '-':printf("%d", a-b);break;
        case '*':printf("%d", a*b);break;
        case '/':if(b!=0) printf("%d", a/b);
        else printf("error"); break;
        default:printf("error\n");
    }
    return 0;
}