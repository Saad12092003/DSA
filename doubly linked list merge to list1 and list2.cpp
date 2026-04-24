#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node*pre;
};
Node* head1=NULL;
Node* head2=NULL;
void list1(int val)
{
    Node* newNode=new Node();
    newNode->data=val;
    newNode->next=NULL;
     newNode->pre=NULL;
     if(head1== NULL)
     {
         head1=newNode;
     }
     else
     {
         Node* temp=head1;
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newNode;
         newNode->pre=temp;
         temp->pre=NULL;
     }
}
void list2(int val)
{
    Node* newNode=new Node();
    newNode->data=val;
    newNode->next=NULL;
     newNode->pre=NULL;
     if(head2== NULL)
     {
         head2=newNode;
     }
     else
     {
         Node* temp=head2;
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newNode;
         newNode->pre=temp;
         temp->pre=NULL;
     }
}
void merging()
{
    Node* temp=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
    head2->pre=temp;
}

void traverse()
{
Node* temp=head1;
while(temp!=NULL)
{
cout<<temp->data<<"<->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}
int main()
{
    list1(1);
     list1(2);
      list1(3);
       list1(4);
        list2(5);
         list2(6);
          list2(7);
           merging();
          traverse();



}
