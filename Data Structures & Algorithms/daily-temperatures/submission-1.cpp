class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // 目前溫度 > stack top 那天的溫度
        // → 代表找到那天之後第一個更熱的日子
        // → ans[舊index] = 現在index - 舊index
        // → pop
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int temp = st.top();
                st.pop();
                ans[temp] = i-temp;
            }
            st.push(i);
        }
        return ans;
    }
};
