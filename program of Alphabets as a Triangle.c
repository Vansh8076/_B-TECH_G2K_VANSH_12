// program of Alphabets as a Triangle
#include<stdio.h>
void main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=26;i++){
        for(j=1;j<=i;j++){
        printf("%C",ch);
        }
        ch++;
        printf("\n");
    }
}
