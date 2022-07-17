#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
};


Node* getMin(Node* head){

  Node* slow = head;
  Node* fast = head;

  if(head != NULL){
    while (fast != NULL && fast ->next != NULL)
      {
        slow = slow->next;
        fast = fast->next->next;
      }
      cout<<"mid ele is:"<<slow->data;
    }
  }
  

void print(Node* node){
  
  while (node != NULL)
    {
      cout<<node->data<<" ";
      node = node->next;
    }
  }

void insert(Node** head,int data){

  Node* temp = new Node();
  temp->data = data;
  temp->next = (*head);
  (*head) = temp;
}

int main(){

  Node* head = NULL;
  
  insert(&head,46);
  insert(&head,57);
  insert(&head,42);
  insert(&head,39);
  insert(&head,23);
  insert(&head,15);

  print(head);
  cout<<endl;
  getMin(head);
  
  
}


