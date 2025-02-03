#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i;
    int prime=1;
    scanf("%d",n);
    if(n==0 || n==1){
       prime=0;
    }
    else{
       for (i=2;i<n;i++){
        if(n%i==0){
           prime=0;
        }
       }
    }
    if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}