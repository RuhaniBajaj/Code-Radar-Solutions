#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",n);
    if(n>0){
        if(n%1==0 && n%n==0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    else{
        printf("Invalid number");
    }
    return 0;
}