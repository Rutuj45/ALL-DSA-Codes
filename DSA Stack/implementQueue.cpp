#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue123{

  int* arr;
  int qfront;
  int rear;
  int size;

public:
  Queue123(){

    size=100001;
    arr=new int[size];
    qfront=0;
    rear=0;
  }

  bool isEmpty(){

    if(qfront==rear){
      return true;
    }
    else{
      return false;
    }
  }

  void queue(int data){
    if(rear==size){
      cout<<"queue is full"<<endl;
    }
    else{

      arr[rear]=data;
      rear++;
    }
  }

  int dequeue(){
    if(qfront==rear){
      return -1;
    }
    else{
      int ans = arr[qfront];
      arr[qfront]=-1;
      qfront++;
      if(qfront==rear){
        qfront=0;
        rear=0;
      }
      return ans;
    }
  }

  int getFront(){
    if(qfront==rear){
      return -1;
    }
    else{
      return arr[qfront];

    }
  }
};

int main(){

  Queue123 q;
  
  q.queue(10);
  q.queue(20);
  q.queue(30);
  q.queue(40);
  q.queue(50);

  q.dequeue();
  q.dequeue();

  cout<<q.getFront()<<endl;


 
}