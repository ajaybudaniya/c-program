# include<stdio.h>
int main(){
    int a=3,d=99;
    d=*(&d);
    printf("%u\n",*(&a));
    printf("%u\n",&d);
    return 0;

}
