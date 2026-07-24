class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3(nums1.size() + nums2.size());
        for(int i = 0;i<nums1.size();i++){
            nums3[i] = nums1[i];
        }
        for(int i = 0;i<nums2.size();i++){
             nums3[nums1.size() + i] = nums2[i];
        }
        sort(nums3.begin(), nums3.end());
        int n = nums3.size();
        if(n%2!=0){
            return nums3[n / 2];
        }
        return (nums3[n/2 - 1] + nums3[n/2]) / 2.0;
    }
};