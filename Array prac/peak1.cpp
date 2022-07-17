#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sort01(int arr[], int n)
{

  int left = 0;
  int right = n - 1;

  while (left < right)
  {

    if (arr[left] == 0)
    {
      left++;
    }
    while (arr[right] == 1)
    {
      right--;
    }
    while (left < right)
    {
      swap(arr[left++], arr[right--]);
    }
  }
}
int print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[5] = {1, 1, 1, 0, 0};
  sort01(arr, 5);
  print(arr, 5);
}
