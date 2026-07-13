#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> rotate(vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 0) return arr;
    
        k = k % n; 
    
        ::rotate(arr.begin(), arr.begin() + (n - k), arr.end());
    
        return arr;
    }
};