#include<iostream>
using namespace std;

int freq(int arr[],int n,int x){
  int cnt=0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i]==x){
      cnt++;
    }
  }
  return cnt;
  
}
int main(){
  int arr[5]={1,2,1,1,1};
  cout<<"freq is:"<<freq(arr,5,1);
}
