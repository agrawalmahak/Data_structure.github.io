 #include<stdio.h>
void push(int A[],int top,int n,int data)
 {
     if (top>= n-1)
        printf("overflow");
     else
        printf("Enter value to be pushed:");
        scanf("%d",&data);
        top=top+1;
        A[top]=data;
 }
 void pop(int A[],int data,int top)
 {
     if(top==-1)
       printf("underflow");
     else
        printf("Popped element is:",A[top]);
        top=top-1;
 }
 void traverse(int A[],int i,int top)
 {
     if(top>=0){
     for(i=top ;i>=0;i--)
     {
         printf("Element %d",A[i]);
     }
     }
     else
        printf("Empty stack");
 }
 int main()
 {
     int A[100],top=-1,data=0,i;
     int n,m;
     printf("Enter the size of the stack:");
     scanf("%d",&n);
     printf("1.push\n2.pop\n3.traverse\n");
     do
     {
     printf("Enter the value");
     scanf("%d",&m);
     switch(m)
     {
       case 1:
           {
               push(A,top,n,data);
               break;
           }
       case 2:
        {
            pop(A,data,top);
            break;
        }
       case 3:
        {
            traverse(A,i,top);
            break;
        }
case 4
        {
            exit(0);
        }
     }
     }
     while(1);
      return 0;
 }
