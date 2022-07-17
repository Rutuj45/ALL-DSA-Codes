#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kth(int arr[],int n,int k){

  sort(arr,arr+n);

  return arr[k-1];
}
int main(){
  int arr[6]={78,45,18,7,98,101};

  cout<<"smallest:"<<kth(arr,6,3);
}
