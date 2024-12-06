#include <iostream>
#include <vector>
using namespace std;

void recurPermute(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int freq[])
{
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i] = 1;
            recurPermute(nums, ans, ds, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[nums.size()] = {0};
    recurPermute(nums, ans, ds, freq);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}