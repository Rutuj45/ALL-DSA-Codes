#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;


  Node(int d){
    this->data = d;
    this->next = NULL; 
  }

  ~Node(){
    int value = this->data;
    if(this->next != NULL){
      delete next;
      next = NULL;
    }
    cout<<"memory is free for node with data" << value <<endl;
  }
};

void insertNode(Node* &tail, int element, int d){

  if(tail == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode -> next = newNode; 
  }

  else{

    Node* curr = tail;

    while (curr->data != element)
    {
      curr = curr ->next;
    }

    Node* temp = new Node(d);
    temp -> next =curr ->next;
    curr ->next = temp;
  }

}

void print(Node* tail){

  Node* temp = tail;

  if(tail == NULL){
    cout<<"List is Empty"<<endl;
    return ;
  }

  do{
    cout<< tail-> data <<" ";
    tail = tail ->next;
  }while (tail != temp);

  cout<<endl;
}

void deleteNode(Node* &tail, int value){

  if(tail == NULL){
    cout<<"list is empty,please check again"<<endl;
    return ;
  }

  else{

    Node* prev = tail;
    Node* curr = prev ->next;

    while (curr->data != value)
    {
      prev= curr;
      curr = curr ->next;
    }

    prev->next = curr->next;

    if(curr == prev){
      tail = NULL;
    }

    else if(tail == curr){
      tail = prev;
    }

    curr ->next =NULL;
    delete curr;
    
  }
}
bool checkCircular(Node* head){
  if(head == NULL){
    return true;
  }

  Node* temp = head->next;
  while (temp != NULL && temp != head)
  {
    temp=temp->next;
  }

  if(temp == head){
    return true;
  }
  return false ;
}
int main() {

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);
    

    /*deleteNode(tail, 3);
    print(tail); */

    if(checkCircular(tail)){
       cout<<"list is circular"<<endl;
    } 
    else{
      cout<<"list is not circular"<<endl;
    }

    return 0;
}