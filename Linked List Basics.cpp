#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
int data;
Node*next;
};
Node *head=NULL;
int main()
{
    Node *ptr=new Node();
ptr->data=5;

  ptr->next=NULL;
  head=ptr;
  cout<<"DATA: "<<head->data;
}
