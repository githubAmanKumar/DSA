#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<vector<int>> tsum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> unique_triplets;

    for (int i = 0; i < n; i++)
    {
        int tar = -nums[i];
        set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int c = tar - nums[j];
                if (s.find(c) == s.end())
                {
                    vector<int> trip = {nums[i], nums[j], c};
                    sort(trip.begin(), trip.end());
                    
                    unique_triplets.insert(trip);
                    ans.push_back(trip);
                    
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