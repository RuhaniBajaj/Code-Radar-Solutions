#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j;
    scanf("%d %d",&i,&j);
    for (i=1;i<=n;i++){
        for (j=1;j<=i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}