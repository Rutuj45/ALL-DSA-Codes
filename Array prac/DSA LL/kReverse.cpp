#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
};

Node* kReverse(Node* head,int k){

    if(head == NULL){
      return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int cnt = 0;

    while(curr != NULL && cnt < k){

      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
      cnt++;
    }
    

    if(next != NULL)
    {
      head->next = kReverse(next,k);
    }
    return prev;
  }
  

void insert(Node** head,int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = (*head);
    (*head) = temp;
  }

void print(Node* node){
    
    while (node != NULL)
    {
      cout<<node->data<<" ";
      node=node->next;
    }   
  }

int main(){
  
  Node* head = NULL;

  insert(&head, 6);
  insert(&head,5);
  insert(&head,4);
  insert(&head,3);
  insert(&head,2);
  insert(&head,1);

  cout<<"before:";
  print(head);
  cout<<endl;
  head= kReverse(head,3);
  cout<<"after:";
  print(head);
}