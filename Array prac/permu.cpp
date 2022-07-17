#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<string>> & ans, vector<string> & nums, int index)
{
  if (index >= nums.size())
  {
    cout << nums[index] << " ";
    return;
  }
  for (int i = index; i < nums.size(); i++)
  {
    swap(nums[i], nums[index]);
    solve(ans, nums, index + 1);
    swap(nums[i], nums[index]);
  }
}
int main()
{
  vector<vector<string>> ans;
  vector<string> nums = {"abc"};
  solve(ans, nums, 0);
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
  }
  return 0;
}