
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num : nums) {
            if(seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
    
    bool validateConstraints(int n, const vector<int>& nums) {
    if (n < 1 || n > 100000) {
        cout << "Error: Array size must be between 1 and 100,000" << endl;
        return false;
    }
    
    for (int i = 0; i < n; i++) {
        if (nums[i] < -1000000000 || nums[i] > 1000000000) {
            cout << "Error: Element " << nums[i] << " at index " << i 
                 << " is out of range [-10^9, 10^9]" << endl;
            return false;
        }
    }
    
    return true;
    }
    int main() {
    int n;
    cin >> n;
    
    if (n < 1 || n > 100000) {
        return 1;
    }
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    if (!validateConstraints(n, nums)) {
        return 1;
    }
    
    Solution solObj;
    bool result = solObj.containsDuplicate(nums);
    
    cout << (result ? "true" : "false") << endl;
    
    return 0;
}
};




