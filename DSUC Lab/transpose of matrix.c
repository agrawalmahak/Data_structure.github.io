#include<stdio.h>
int main()
{
    int i,j;
    int a[4][4],b[4][4];
    printf("Enter elements of array a");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }

    printf("matrix a is:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }

    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
    {
        b[j][i]=a[i][j];
    }
    }
    printf("matrix c is:\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
    {
      printf("%d ",b[j][i]);
    }
    printf("\n");
    }


}

