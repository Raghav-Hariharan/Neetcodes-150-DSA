#Question: Valid parantheses
#Difficulty: Easy
#Approach: Push into stack if you see an open bracket, check TOS and check if brackets match if yes return true, if not false
#Link: https://leetcode.com/problems/valid-parentheses/submissions/2117982950
#Time complexity: O(n)
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='['||s[i]=='{') stk.push(s[i]);
            if(stk.empty()) return false;
            else if(s[i]==')'){
                if(stk.top()=='(') stk.pop();
                else return false;
            }
            else if(s[i]=='}'){
                if(stk.top()=='{') stk.pop();
                else return false;
            }
            else if(s[i]==']'){
                if(stk.top()=='[') stk.pop();
                else return false;
            }
        }
        if(stk.empty()) return true;
        else return false;
    }
};
