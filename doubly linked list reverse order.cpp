#include<iostream>
using namespace std;
struct Node
{

 int data;
  Node* next;
  Node* pre;

};
Node* head = NULL;

void insertion(int val)
{
  Node* temp = head;
Node* newNode = new Node();
newNode->data = val;
newNode->next = NULL;
newNode->pre = NULL;
if(head == NULL)
{
head = newNode;
return;
}
while(temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
  newNode->pre = temp;
}
  void traverse()
{
  Node* temp = head;
  while(temp != NULL)
{
  cout << temp->data << "<->";
  temp = temp->next;
}
  cout << "NULL" << endl;
}
   void Reverseorder()
{
  if(head == NULL)
{
   cout << "List is empty" << endl;
   return;
}
 Node* temp = head;
  while(temp->next != NULL)
{
  temp = temp->next;
}
   while(temp!=NULL)
{
    cout<<temp->data<<"<->";
    temp->next=temp->pre;
    temp->pre=temp->next;
    temp=temp->next;
}

cout << "NULL" << endl;
}
int main()
{
insertion(1);
insertion(2);
insertion(3);
insertion(4);
insertion(5);
cout << "Before Reverse:" << endl;
traverse();
cout << "After Reverse:" << endl;
Reverseorder();
}
