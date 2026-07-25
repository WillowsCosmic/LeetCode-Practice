class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0,r = height.size() - 1,maximum = 0,area = 0;
        if(height.size()<0) return -1;
        while(l < r){
            area = (r-l) * min(height[l],height[r]);
            if(height[l]<=height[r]){
                l++;
            }
            else{
                r--;
            }
            maximum = max(area,maximum);
        }
        return maximum;

    }
};