#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    printf("Enter the no. of row,column in matrix a:");
    scanf("%d%d",&m,&n);
    printf("Enter the no. of row,column in matrix b:");
    scanf("%d%d",&m,&n);
    int a[10][10],b[10][10],mul[10][10],c[10][10];
    printf("Enter elements of array a");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
     printf("Enter elements of array b");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        scanf("%d",&b[i][j]);
    }
    }
    printf("matrix a is:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        printf("%d",a[i][j]);
    }
    printf("\n");
    }
     printf("matrix b is:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
         printf("%d",b[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    }
    printf("Addition of matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
      printf("%d ",c[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        mul[i][j]=0;
        for(k=0;k<n;k++)
    {
        mul[i][j]+= a[i][k]*b[k][j];
    }
        }
    }
     printf("Multiplication of matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
      printf("%d ",mul[i][j]);
    }
    printf("\n");
    }


}
