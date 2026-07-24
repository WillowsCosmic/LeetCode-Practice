class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size() > threshold) return -1; 
        int l = 1,r = *max_element(nums.begin(),nums.end()),mid = 0,sum = 0;
        while(l<r){
            mid = (l+r)/2;
            sum = 0;
            for(int i = 0;i < nums.size();i++){
                sum += (nums[i] + mid - 1) / mid;
            }
            if(sum <= threshold){
                r = mid;
            }
            else{
                l = mid + 1;
            }
            
        }
        return l;
    }
};