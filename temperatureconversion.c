#include<stdio.h>
int main(){
    float c;
    printf("enter temperature in celcius");
    scanf("%f",&c);
    float f;
    f = (c*9/5)+32;
    printf("the temperature in fehrenheit is %f",f);
    return 0;

}
