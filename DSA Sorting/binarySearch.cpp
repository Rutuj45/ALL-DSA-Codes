#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int k){

  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;

  while (s<=e)
  {
    if(arr[mid]==k){
      return mid;
    }
    if(arr[mid] < k){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
     mid=s+(e-s)/2;
  }
  return -1;
 
}

int main(){

  int arr[5]={1,3,5,7,9};
  
  int k;
  cin>>k;

  cout<<"binary search element is :"<<binarySearch(arr,5,k);
}

