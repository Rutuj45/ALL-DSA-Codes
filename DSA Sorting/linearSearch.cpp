#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int k){

  for(int i=0;i<n;i++){

    if(arr[i]==k){
      return 1;
    }
  }
  return 0;
}

int main(){

  int arr[5]={1,3,5,7,9};
  
  int k;
  cin>>k;
  
  bool found=linearSearch(arr,5,k);

  if (found){
    cout<<"element is present"<<endl;
  }
  else{
    cout<<"element is not present"<<endl;
  }
}