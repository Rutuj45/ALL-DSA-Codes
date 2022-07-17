
#include<bits/stdc++.h>
using namespace std;


int main(){
  int arr[5]={54,28,78,45,7};
  int n=sizeof(arr)/sizeof(arr[0]);

  sort(arr,arr+n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  

  
}