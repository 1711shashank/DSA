/*   add in last
   Name- Rahul Raj
   Roll-30
   univ Roll- 10900219042
*/
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
struct Node *insertionEnd(struct Node * head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
   
    return head;

}

int main()
{
    struct Node *head,*third,*fourth;
    struct Node *second;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=4;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=7;
    third->next=fourth;
    
    fourth->data=9;
    fourth->next=head;
    printf("before insertion:\n");
    linkedLIst_Traversal(head);
   head= insertionEnd(head,90);
   head= insertionEnd(head,50);
    printf("After insertion:\n");
    linkedLIst_Traversal(head);


}
