class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        while(left <= right){
            int mid = left + (right - left) / 2;
            long long hours = 0;
            for(int pile: piles) hours += (pile + mid - 1) / mid;
            // 酷酷數學, 向上取整:(分子+分母-1)/2, 整數的話不影響

            //ex:
            // 6/3 = 2
            // 6+3-1 = 8, 8/3 = 2?

            // 7/3 = 2...1
            // 7+3-1 = 9, 9/3 = 3
            if(hours <= h) right = mid-1;
            else left = mid+1;
        }
        return left;
    }
};
