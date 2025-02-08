#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int sum=0;
    for(i=1;i<=a;i++){
       sum=sum+a;
    }
       printf("%d",sum);
    return 0;
}