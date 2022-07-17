#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int arr[],int n){ 
  
  for(int i=0;i<n-1;i++){
     
    int minIndex=i;
    for(int j=i+1;j<n;j++){

      if(arr[j]<arr[minIndex]){
        minIndex = j;
      }
    }
    swap(arr[minIndex],arr[i]);
  }
}

int main(){
  int arr[4]={9,3,7,1};
  int n=4;

  selectionSort(arr,4);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}