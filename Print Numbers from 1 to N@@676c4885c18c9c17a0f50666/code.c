#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;){
        printf("%d ",i);
        i++;
    }
    return 0;
}