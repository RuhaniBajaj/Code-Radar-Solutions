#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i;
    scanf("%d %d",&n,&i);
    mask=1<<(i-1);
    printf("%d", n&mask);
    return 0;
}