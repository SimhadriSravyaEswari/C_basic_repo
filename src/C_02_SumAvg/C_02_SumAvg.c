#include<stdio.h>
int main()
{
    int a,b,sum;
    float avg;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum = a+b;
    avg = (a+b)/2;
    printf("\n The sum of %d and %d is %d ",a,b,sum);
    printf("\n The avg of %d and %d is %f",a,b,avg);
    return 0;
}