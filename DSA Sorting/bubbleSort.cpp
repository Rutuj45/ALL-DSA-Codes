#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){

  for(int i=1;i<n;i++){
    bool swapped=false;
    for(int j=0;j<n-1;j++){
      
      if(arr[j+1]<arr[j]){
        swap(arr[j+1],arr[j]);
        swapped = true;
      }
    }
    if(swapped == false){
      break;
    }
  }
}

int main(){

  int arr[4]={9,3,7,1};
  int n=4;

  bubbleSort(arr,4);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}