#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node* head=NULL;
void insert(int val)
{
    struct node * new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    if(head==NULL)
    {
        head=new;
        new->next=NULL;
    }
    else
    {
        new->next=head;
        head=new;
    }
}
void display()
{
    struct node*temp=head;
    while(temp->next!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main() {
    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int val;
        scanf("%d",&val);
        insert(val);
    }
    display();

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
