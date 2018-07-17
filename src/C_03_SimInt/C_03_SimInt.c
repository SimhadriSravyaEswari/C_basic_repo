# include<stdio.h>
int main()
{
    float principal,time,rate,simint;
    printf("Enter principal amount ");
    scanf("%f",&principal);
    printf("Enter time in years ");
    scanf("%f",&time);
    printf("Enter rate");
    scanf("%f",&rate);
    simint = (principal*time*rate)/100;
    printf("\nThe simple interest is %f", simint); 
    return 0;
}