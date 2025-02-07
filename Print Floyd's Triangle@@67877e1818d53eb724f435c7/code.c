#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j;
    int n=1;
    scanf("%d",&i);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("%d ",n);
           n++;
        }
        printf("\n");
    }
    return 0;
}