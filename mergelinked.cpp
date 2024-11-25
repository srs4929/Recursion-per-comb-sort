#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head=NULL;
node* tail=NULL;

void in(int x)
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

node* findmid(node* head)
{
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL&& fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

node* sort(node* left,node* right)
{
    if(left==NULL)  return right;
    if(right==NULL) return left;
    node* ans=new node();
    node* temp=ans;
    node* result = NULL;

    // Decide the head of the merged list
    if (left->data < right->data) {
        result = left;
        result->next = sort(left->next, right);
    } else {
        result = right;
        result->next = sort(left, right->next);
    }

    return result;
       
}
node* merge(node* head)
{
    //base case
    if(head==NULL||head->next==NULL) return head;
    
    node* mid=findmid(head);
    node* first=head;
    node* last=mid->next;
    mid->next=NULL;
    first=merge(first);
    last=merge(last);
    node* result=sort(first,last);
    return result;
}   

void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        in(x);
    }
    print();
    cout<<"After sorting"<<endl;
    head=merge(head);
    print();
   
}