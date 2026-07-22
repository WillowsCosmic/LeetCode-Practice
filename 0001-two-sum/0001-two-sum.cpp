#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> indexed;
    for (int i = 0; i < nums.size(); i++)
        indexed.push_back({nums[i], i});

    sort(indexed.begin(), indexed.end());

    int l = 0, r = indexed.size() - 1;
    while (l < r) {
        int sum = indexed[l].first + indexed[r].first;
        if (sum == target)
            return {indexed[l].second, indexed[r].second};
        else if (sum < target) l++;
        else r--;
    }
    return {};

    }
};