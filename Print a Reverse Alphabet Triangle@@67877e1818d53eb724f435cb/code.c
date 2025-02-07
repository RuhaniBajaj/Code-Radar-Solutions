#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for (j=1;j<=i;j++){
            printf("%c "; 'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}