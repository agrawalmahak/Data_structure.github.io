#include<stdio.h>
int main()
{
    int n,i,m,avg,a=0;
    printf("Enter no. of students:");
    scanf("%d",&n);
    printf("Enter the marks of students in a class\n");
    for(i=1;i<=n;i++)
    {
        printf("Marks of Student %d",i);
        scanf("%d",&m);
        a=a+m;
    }
   avg=a/n;
   printf("Average is %d",avg);
}
