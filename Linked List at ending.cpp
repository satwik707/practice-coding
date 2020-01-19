#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL;
 struct node* ptr=NULL;
void insert(int num)
{
    struct node * temp;
   
    
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->next=NULL;
    if(head==NULL)
    {
        
        head=temp;
        ptr=head;
    }
    else
    {
        ptr->next=temp;
       
        ptr=temp;
        
    }
}
void delete()
{
    if(head==NULL)
    {
        return;
    }
    struct node*b=head;
    while((b->next->next)!=NULL)
    {
        b=b->next;
    }
    free(b->next);
    b->next=NULL;
    
    
    
   
      
}
void display()
{
    struct node * ptr1;
    ptr1=head;
    while(ptr1->next!=NULL)
    {
        printf("%d->",ptr1->data);
        ptr1=ptr1->next;
    }
    printf("%d",ptr1->data);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int num;
        scanf("%d",&num);
        
        insert(num);
    }
    int k;
        scanf("%d",&k);
    while(k--)
    {
    delete();
    }
    display();
    return 0;
}
