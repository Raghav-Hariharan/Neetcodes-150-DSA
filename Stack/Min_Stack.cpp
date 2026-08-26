#Question: Min stack
#Difficulty: Meduim
#Approach: Use an extra vector called minstk to keep track of min element to find min in O(n) time
#Link:https://leetcode.com/problems/min-stack/submissions/2121213729
#Time complexity:O(n)
class MinStack {
public:
    vector<int> stk;
    vector<int> minstk;
    MinStack() {
    }
    
    void push(int value) {
        stk.push_back(value);
        if(minstk.size()==0) minstk.push_back(value);
        else{
            int t=*(minstk.end()-1);
            int mini=min(t,value);
            minstk.push_back(mini);
            }
    }
    
    void pop() {
        stk.pop_back();
        minstk.pop_back();
    }
    
    int top() {
        int val=*(stk.end()-1);
        return val;
    }
    
    int getMin() {
        if(stk.size()==0) return 0;
        int m=*(minstk.end()-1);
        return m;
        
    }
};
