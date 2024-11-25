#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head1=NULL;
node* tail1=NULL;
node* head2=NULL;
node* tail2=NULL;

void in(node* &head,node* &tail,int x)
{   
    node* p=new node;
    p->data=x;
    p->next=NULL;
    if(head==NULL)
    {
        head=p;
        tail=p;
    }
    else
    {
        tail->next=p;
        tail=p;
    }
}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

node* merge(node* head1,node* head2)
{
    node* left=head1;
    node* right=head2;
    if(left==NULL) return right;
    if(right==NULL) return left;
    node* result=NULL;
    if(left->data<right->data)
    {
        result=left;
        result->next=merge(left->next,right);
    }
    else if(left->data>right->data)
    {
        result=right;
        result->next=merge(left,right->next);
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    cout<<"First linked list:"<<endl;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        in(head1,tail1,x);
    }
   // print(head1);
    cout<<"Second Linked List"<<endl;
    int m;
    cin>>m;
    
    for(int i=0;i<m;i++)
    {
       int x;
       cin>>x;
       in(head2,tail2,x);
    }
    //print();

    node* mergehead=merge(head1,head2);
    print(mergehead);
   
   
}