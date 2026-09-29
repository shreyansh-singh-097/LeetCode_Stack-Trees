class Solution {
public:
    int maxArea(vector<int>& height) {
        int h = height.size()-1;
        int left = 0 , right = h;
        int mx = 0;
        while(left<right){
            int l = right - left;
            int h = min(height[left],height[right]);
            int area = l * h;
            mx = max(mx,area);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return mx;
    }
};