#include<stdio.h>
int main()
{
    float c,f;
    printf("Read a temperature");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature in Celsius=%f",c);
    return 0;
}
