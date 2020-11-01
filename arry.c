# include<stdio.h>
int main(){
 int a=3,b=4,i,j;
 int marks[3][4];
for (i=0; i <a; i++)
{
    for ( j = 0; j <b; j++)
    {
        printf("please input student :%d and subject :%d \n",i+1,j+1);
        scanf("%d",&marks[i][j]);
    }
    
}
for (i=0; i <a; i++)
{
    for ( j = 0; j <b; j++)
    {
        printf("your marks of student :%d in subject :%d marks: %d \n",i+1,j+1, marks[i][j]);
    }
}


    return 0;
}