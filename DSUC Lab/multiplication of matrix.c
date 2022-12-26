#include<stdio.h>
int main()
{
    int i,j;
    int a[4][4],b[4][4],c[4][4];
    printf("Enter elements of array a");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
     printf("Enter elements of array b");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
    }
    printf("matrix a is:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        printf("%d",a[i][j]);
    }
    printf("\n");
    }
     printf("matrix b is:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
         printf("%d",b[i][j]);;
    }
    printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        c[i][j]=a[i][j]*b[i][j];
    }
    }
    printf("matrix c is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
      printf("%d ",c[i][j]);
    }
    printf("\n");
    }


}

