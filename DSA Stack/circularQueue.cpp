#include<iostream>
using namespace std;

class CircularQueue{

  int *arr;
  int front;
  int rear;
  int size;

  public:

  CircularQueue(int n){
    size=n;
    arr=new int[size];
    front = rear = 1;
  }

  bool enqueue(int value){

    if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
      cout<<"Queue is full";
      return false;
    }
    else if(front == -1){
      front = rear = 0;
    }
    else if(rear == size-1 && front != 0){
      rear=0;
    }
    else{
      rear++;
    }

    arr[rear] = value;
    return true;
  }

  int dequeue(){
    
    if(front==-1){
      return -1;
    }

    int ans = arr[front];
    arr[front] = -1;

    if(front == rear){
      front = rear = -1; 
    }

    else if(front==size-1){
      front=0;
    }

    else{
      front++;
    }

    return ans;
  }
  int getFront(){
    if(front==rear){
      return -1;
    }
    else{
      return arr[front];

    }
  }


};
int main(){

  CircularQueue c(6);

  c.enqueue(10);
  c.enqueue(20);
  c.enqueue(30);
  c.enqueue(40);
  c.enqueue(50);


  cout<<c.getFront()<<endl;

}