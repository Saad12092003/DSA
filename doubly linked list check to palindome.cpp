#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node*pre;
};
Node* head1=NULL;
//Node*head2 =NULL;
void list1(int val)
{
    Node* newnode=new Node();
    newnode->data=val;
    newnode->pre=NULL;
    newnode->next=NULL;
    if(head1==NULL)
    {
        head1=newnode;
    }
    else{
        Node*temp=head1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->pre=temp;
    }
}

void palindome()
{
    Node*left=head1;
    Node*right=head1;
    while(right->next!=NULL)
    {
        right=right->next;
    }
    if((left->data == right->data) && (left->next->data == right->pre->data))
    {
        cout<<"IS palindome";
    }
    else
    {
        cout<<"Not palindome";
    }
}

void printlist()
{
    Node*temp=head1;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<endl;

}

int main()
{
     list1(1);
     list1(2);
     list1(3);
     list1(1);
     list1(1);
       palindome();
      printlist();



}
