#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<vector<int>> tsum(vector<int> &nums, int target) // brute force
{
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> s; // unique triplets

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == target)
                {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());
                    if (s.find(trip) == s.end())
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }

    return ans;
}
main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = tsum(nums, 0);

    for (const auto &triplet : result)
    {
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}