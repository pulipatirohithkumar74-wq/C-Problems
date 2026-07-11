#include <stdio.h>

int main()
{
    float w,h,bmi;

    scanf("%f %f",&w,&h);

    bmi = w/(h*h);

    printf("BMI = %.2f\n", bmi);

    if(bmi<18.5)
        printf("Underweight");
    else if(bmi<25)
        printf("Normal");
    else
        printf("Overweight");

    return 0;
}
