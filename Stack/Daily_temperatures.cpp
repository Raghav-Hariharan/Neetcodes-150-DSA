#Question: Daily temperatures
#Difficulty: Medium
#Approach: Create a stack and push elements indices, if the next element is greater than prev then subtract the top of stack with current index using a while loop
#Link: https://leetcode.com/problems/daily-temperatures/submissions/2123098339
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(),0);
        stack<int> stk;
        for(int i=1;i<temperatures.size();i++){
            if(stk.empty()) stk.push(0);
            while(!stk.empty() && temperatures[i]>temperatures[stk.top()]){
                answer[stk.top()]=i-stk.top();
                stk.pop();
            }
            stk.push(i);
        }
        return answer;
    }
};
