#include<iostream>
using namespace std;

int maxele(int arr[],int n){

  int maxi=INT8_MIN;

  for(int i=0;i<n;i++){

    maxi =max(maxi,arr[i]);
  }
  return maxi;
}

int minele(int arr[],int n){
  
  int mini=INT8_MAX;
 for(int i=0;i<n;i++){
   
   mini=min(mini,arr[i]);

 }
 return mini;
}

int main(){
  int arr[6]={44,55,89,11,33,100};

  cout<<"max ele:"<<maxele(arr,6)<<endl;
  cout<<"mini ele:"<<minele(arr,6)<<endl;
}