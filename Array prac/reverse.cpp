#include<iostream>
using namespace std;

int reverse(int arr[],int n){

  int s=0;
  int e=n-1;

  while (s<=e)
  {
    swap(arr[s++],arr[e--]);
  }
  cout<<endl;
}
int printArr(int arr[],int n){

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[5]={88,59,90,100,200};

  reverse(arr,5);
  printArr(arr,5);
}