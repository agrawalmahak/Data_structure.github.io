#include<stdio.h>
int main()
{
    int i,j,m,n,k=0;
    int a[]={10,20,25,30,40,50},b[]={15,25,30,35,45,55,65,75},c[20];
    /*printf("Enter the size of array a and b:");
    scanf("%d%d",&m,&n);
    printf("Enter element of array a:");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter element of array b:");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);*/
i=0;
j=0;
    while(i<=4 && j<=6)
        {
            if(a[i]<b[j])
               {
                   c[k]=a[i];
                i++;
                k++;
                }
                if(a[i]==b[j])
                {

                    c[k]=a[i];
                    k++;
                    c[k]=b[j];
                    k++;
                    i++;
                    j++;
                }

        else
            {
            c[k]=b[j];
            j++;
            k++;
            }
        }
      /*  else
           {
            c[k]=b[j];
        j++;
        k++;
           }*/
           while(i<5)
           {
               c[k]=a[i];
               i++;
               k++;
           }
           while(j<7)
           {
               c[k]=b[j];
               j++;k++;
           }

             printf("\nTotal elements in array C are:");
    for(k=0;k<12;k++)
    {
        printf("%d \n",c[k]);
    }

        }


