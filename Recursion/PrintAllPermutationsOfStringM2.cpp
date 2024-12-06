#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void recurPermute(int index, vector<vector<int>> &ans, vector<int> &nums)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int ptr = index; ptr < nums.size(); ptr++)
    {
        swap(nums[index], nums[ptr]);
        recurPermute(index + 1, ans, nums);
        swap(nums[index], nums[ptr]);
    }
}

int main()
{
    vector<vector<int>> ans;
    vector<int> nums = {1, 2, 3};
    recurPermute(0, ans, nums);
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