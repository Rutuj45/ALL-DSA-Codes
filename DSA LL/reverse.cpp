#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
};

Node* reverse(Node* &head){

  if(head == NULL || head->next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL)
    {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
  }

void insert(Node** head,int data){

  Node* temp = new Node();
  temp->data = data;
  temp->next = (*head);
  (*head) = temp;
}

void print(Node* node){

  while(node != NULL){
    cout<<node->data<<" ";
    node = node->next;
  }
}


int main(){

  Node* head = NULL;

  insert(&head,55);
  insert(&head,44);
  insert(&head,33);
  insert(&head,22);
  insert(&head,11);

  cout<<"before:";
  print(head);
  reverse(head);
  cout<<"after:";
  print(head);
}