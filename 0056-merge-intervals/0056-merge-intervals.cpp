class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> output;
        int n = intervals.size();
        for(int i = 0; i<n; ){
            int s = intervals[i][0];
            int e = intervals[i][1];
            int j = i + 1;
            while (j < n && intervals[j][0] <= e) {
                e = max(e, intervals[j][1]);
                j++;
            }
            output.push_back({s, e});
            i = j;
        }
        return output;
    }
};