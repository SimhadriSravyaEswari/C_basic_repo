#include<stdio.h>
int main()
{
    float fh,cel;
    int x;
    printf("\n 1.For fahrenheit to celsius ");
    printf("\n 2.For celsius to fahrenheit ");
    printf("enter your choice");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Enter the value of fahrenheit temperature");
        scanf("%f",&fh);
        cel=(fh-32)/1.8;
        printf("Temperature in celsius %f",cel);
        break;
        case 2:
        printf("Enter the value of celsius temperature");
        scanf("%f",&cel);
        fh= (cel*1.8)+32;
        printf("Temperature is %.2f",fh);
        break;
        default:
        printf("wrong choice");

    }

    return 0;

}