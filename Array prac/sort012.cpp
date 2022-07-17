#include<iostream>
using namespace std;

int printArr(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int sort012(int arr[],int n){

  int left=0;
  int right=n-1;

  while (left<right)
  {
    if(arr[left]==0 && left<right){
       left++;
    }
    if(arr[right]==1 && left<right){
      right--;
    }
   
    if(left < right){
      swap(arr[left++],arr[right--]);
    }
  }
}


int main(){
  int arr[8]={1,1,1,0,1,1,1,1};
  
  cout<<"rryyryyr"<<endl;
  
  sort012(arr,8);
  printArr(arr,8);
 
}