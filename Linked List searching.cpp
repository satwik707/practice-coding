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
int search(int num)
{
    struct node* p;
    p=head;
    while(p!=NULL)
    {
        if(p->data==num)
        {
            return 1;
        }
        p=p->next;
    }
    return 0;
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
    if(search(k)==1)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
    //display();
    return 0;
}
