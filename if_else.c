# include<stdio.h>
int main (){
    int age;
    printf("please you enter your age \n");
    scanf("%d", &age);
    if (age>=18 && age<=80)
    {
        printf("you are eligilabel to drive to a car \n", age);
    }
    else
{    
        printf("you are not abel to driVE A CAR \n", age);
    }
    return 0;
}