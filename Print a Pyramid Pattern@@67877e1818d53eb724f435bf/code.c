#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=n-i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}