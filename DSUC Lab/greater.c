#include<stdio.h>
int main()
{
int size,largest,i;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter array element:");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
largest=a[0];
for(i=0;i<size;i++)
{
    if(a[i]>largest)
    {
        largest=a[i];
    }
}
printf("The largest element of array is %d",largest);

}
