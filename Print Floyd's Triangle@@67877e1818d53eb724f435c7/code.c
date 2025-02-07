#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j;
    int n;
    int num=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("%d ",num);
           num++;
        }
        printf("\n");
    }
    return 0;
}