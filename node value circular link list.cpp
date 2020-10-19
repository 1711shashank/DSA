#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};
void linkedLIst_Traversal(struct Node *head)
{
    struct Node *ptr=head;
   do
    {
        printf("The value is :%d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    

}
int main()
{
    struct Node *head,*third,*fourth;
    struct Node *second;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=2;
    head->next=second;

    second->data=6;
    second->next=third;

    third->data=1;
    third->next=fourth;
    
    fourth->data=5;
    fourth->next=head;

    linkedLIst_Traversal(head);


}
