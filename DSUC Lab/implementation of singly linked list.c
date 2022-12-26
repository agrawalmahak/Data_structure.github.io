#include<stdio.h>
struct Node
{
    int info;
    struct Node*link;
};
struct Node*start;
void creation()
{
    int ch;
    struct Node*ptr,*cpt;
    ptr=(struct node*)malloc(sizeof(struct Node));
    printf("Enter info of first node:");
    scanf("%d",&ptr->info);
    start=ptr;
    printf("Enter 1 to create Node,0 to not create Nod");
    scanf("%d",&ch);
    while(ch==1)
    {
        cpt=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter info of next Node:");
        scanf("%d",&(cpt->info));
        ptr->link=cpt;
        ptr=cpt;
        printf("Enter 1 to create and 0 not to create");
        scanf("%d",&ch);
    }
    ptr->link=NULL;
}

    void Traverse()
    {
        struct Node*ptr;
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->info);
            ptr=ptr->link;
        }
    }

main()
{
    creation();
    Traverse();

}
