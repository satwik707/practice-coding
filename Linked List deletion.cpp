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
void delete(int k)
{
    int i=0;
    struct node * p;
    p=head;
    if(head==NULL && k>=1)
    {
        return;
    }
    while(i<k-1)
    {
        p=p->next;
        i++;
    }
    if (p == NULL || p->next == NULL) 
         return; 
    struct node* t=p;
    if(k==0)
    {
        
        head=head->next;
       free(p);
        
    }
    
    else
    {
        struct node* a=p->next->next;
        free(p->next); 
        p->next=a;
    }
        
      
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
    delete(k);
    display();
    return 0;
}
