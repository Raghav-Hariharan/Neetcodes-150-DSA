#Question: Largest rectangle in histogram
#Difficulty: Hard
#Approach: Similar to temperatures, use a stack in such a way that you check top of stack and resolve based on it. 
#Link: https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/2125649975
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stk;
        int left=0;
        int right=0;
        int maxarea=0;
        for(int i=0;i<heights.size();i++){
            while(!stk.empty() && heights[stk.top()]>heights[i]){
                int curr=stk.top();
                stk.pop();
                if(stk.empty()) left=-1;
                else{
                    left=stk.top();
                }
                int area=0;
                right=i;
                area=heights[curr]*(right-left-1);
                maxarea=max(area,maxarea);
            }
            stk.push(i);
        }
        while(!stk.empty()){
            right=heights.size();
            int curr=stk.top();
            stk.pop();
            if(stk.empty()) left=-1;
            else{
                left=stk.top();
            }
            int area=heights[curr]*(right-left-1);
            maxarea=max(area,maxarea);
        }
        return maxarea;
    }
};
