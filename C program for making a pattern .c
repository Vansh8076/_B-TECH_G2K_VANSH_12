#include <stdio.h>
int main() {
    int i,j,pattern;
    for(i=1;i<=4;i++){
        if(i%2==1)
        pattern =1;
        else
        pattern =0;
        for(j=1;j<=i;j++){
            printf("%d",pattern);
            pattern =1- pattern;
        }
        printf("\n");
    }
    return 0;
}
