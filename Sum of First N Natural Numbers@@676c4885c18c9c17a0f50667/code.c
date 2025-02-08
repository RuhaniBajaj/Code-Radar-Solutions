#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=1;i<=a;i++){
       sum+=i;
    }
       printf("%d",sum);
    return 0;
}