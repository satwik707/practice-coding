#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node*head=NULL;
void insert(int pos,int val)
{
    struct node * temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL && pos>=1)
    {
        return;
    }
    /*if(head==NULL && pos==0)
    {
        head=temp;
        temp->next=NULL;
    } */
    else
    {
        
        int i=0;
        struct node* ptr=head;
        while(i<pos-1)
        {
          ptr=ptr->next;
            i++;
        }
        if(pos==0)
        {
            temp->next=head;
            head=temp;
        }
        else if(pos==1)
        {
            temp->next=head->next;
            head->next=temp;
        }
        else
        {
            temp->next=ptr->next;
            ptr->next=temp;
        }
    }
    
}

void display()
{
    struct node * ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
}

    
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int pos;
        int val;
        scanf("%d %d",&pos,&val);
        insert(pos,val);
        
    }
    display();
    return 0;
}
