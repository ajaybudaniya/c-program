// this program is made  for number printing 
# include<stdio.h>
int main(){
    int a;
    printf("please enter your value your print\n ");
    scanf("%d", &a);
    while (a>=10 && a<=100)
    {
        printf("oyur number line is %d \n", a);
        a++;
    }
    return 0;
}