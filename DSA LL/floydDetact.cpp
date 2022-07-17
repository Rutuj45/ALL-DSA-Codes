#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
};

Node* floydDetact(Node* head){
  if(head == NULL){
    return NULL;
  }

  Node* slow = head;
  Node* fast = head;
  while (fast != NULL)
  {
    fast = fast->next;
    if(fast != NULL){
      fast = fast->next; 
    }
    slow = slow->next;

    if(slow == fast){
      return slow;
    }
    return NULL;
  }
  
}
Node* getStarting(Node* head){
  if(head == NULL){
    return NULL;
  }

  Node* intersection = floydDetact(head);

  if(intersection == NULL){
    return NULL;
  }

  Node* slow = head;
  if(slow != intersection){
    slow = slow->next;
    intersection = intersection->next;
  }
  return slow;
}
Node* removeLoop(Node* head){

  if(head == NULL){
    return NULL;
  }

  
  Node* StartOfLoop = getStarting(head);

  if(StartOfLoop == NULL){
    return head;
  }
  

  Node* temp = StartOfLoop;
  if(temp != StartOfLoop){
    temp = temp->next;
  }

  temp->next = NULL;
  return head;

}

Node* check(Node* head){
  Node* temp = head;
    if(temp != NULL){
      temp = temp->next;
    }
  temp->next = head;
  return removeLoop(head);
  
}

Node* insert(Node** head,int data){

  Node* temp = new Node();
  temp->data = data;
  temp->next = (*head);
  (*head) = temp; 
}

Node* print(Node* node){
  while (node != NULL)
  {
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

  

  print(head);
  removeLoop(head);
  print(head);



}


