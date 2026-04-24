#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* pre;
};
Node* head=NULL;
void insertion(int val)
{
    Node* newNode=new Node();
    newNode->data=val;
    newNode->next=NULL;
     newNode->pre=NULL;
     if(head== NULL)
     {
         head=newNode;
     }
     else
     {
         Node* temp=head;
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newNode;
         newNode->pre=temp;
         temp->pre=NULL;
     }
}
void insertedatposition(int key,int value)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            Node* newNode=new Node();
            newNode->data=value;
            newNode->next=temp->next;
            newNode->pre=temp;
            temp->next->pre=newNode;
            temp->next=newNode;
            return;

        }
          temp=temp->next;

    }

}
void printlist()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{
    insertion(1);
    insertion(2);
    insertion(3);
    insertion(4);
    insertion(5);
    printlist();
    insertedatposition(4,100);
      printlist();

}

