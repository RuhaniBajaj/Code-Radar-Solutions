#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c, Average;
    scanf("%d %d %d",&a,&b,&c);
    Average=(a+b+c)/3;
    printf("Average: %.2d\n",Average);
    return 0;
}