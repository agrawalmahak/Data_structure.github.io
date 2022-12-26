#include<stdio.h>
int main()
{
    int m,i,n,found=0;
    printf("Enter size of array:");
    scanf("%d",&m);
    int a[m];
    printf("Enter element of array a:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be search:");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        if(a[i]==n)
        {
            found=1;
            break;
        }
    }
   if(found==1)
   {
       printf("No. is found");
   }
   else
    printf("Enter correct no.");

}
