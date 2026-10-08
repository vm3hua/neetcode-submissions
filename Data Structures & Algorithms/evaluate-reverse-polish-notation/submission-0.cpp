class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // 遇到數字 → push
        // 遇到 operator → pop 兩個數字出來算
        // 算完 → 結果再 push 回去
        stack<int> ans;
        for(auto c: tokens){
            if(c == "+" || c == "-" || c == "*" || c == "/"){
                int second = ans.top();
                ans.pop();
                int first = ans.top();
                ans.pop();
                if(c == "+"){
                    int temp = first + second;
                    ans.push(temp);
                }
                else if(c == "-"){
                    int temp = first - second;
                    ans.push(temp);
                }
                else if(c == "*"){
                    int temp = first * second;
                    ans.push(temp);
                }
                else{
                    int temp = first / second;
                    ans.push(temp);
                }
            }
            else ans.push(stoi(c));
        }
        return ans.top();
    }
};
