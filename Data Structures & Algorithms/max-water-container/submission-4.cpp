class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0, left = 0, right = heights.size() - 1;
        while(left < right){
            int width = right - left;
            int short_heights = min(heights[left], heights[right]);
            // if(width*short_heights > ans) ans = width*short_heights;
            int area = width*short_heights;
            if(area > ans) ans = area;
            // ----------------------------------------------------------
            // left++;
            if(heights[left] < heights[right]) left++;
            else right--;
            // ----------------------------------------------------------
        }
        return ans;
    }
};
