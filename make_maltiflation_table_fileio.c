# include<stdio.h>
int main(){
    FILE *table;
int number,i=1;
printf("plase enter your number to need the table \n");
scanf("%d",&number);
table = fopen("table.txt","w");
while (i<=10)
{
 fprintf(table,"%d * %d= %d \n",number,i,number*i);
 i++;    
}
fclose(table);
printf("thanks for using my progrands \n");



    return 0;
}