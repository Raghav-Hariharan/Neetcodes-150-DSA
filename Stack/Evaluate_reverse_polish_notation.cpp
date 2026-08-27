#Question: Evaluate reverse polish notation
#Difficulty: Medium
#Approach: Use stack and push numbers into it, if you see an operator pop 2 times and evaluate them
#Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/2122115564
#Time complexity: O(n)
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int fval;
        stack<int> stk;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int num1= stk.top();
                stk.pop();
                int num2=stk.top();
                stk.pop();
                if(tokens[i]=="+"){
                    int val=num1+num2;
                    stk.push(val);
                }
                else if(tokens[i]=="-"){
                    int val=num2-num1;
                    stk.push(val);
                }
                else if(tokens[i]=="*"){
                    int val=num1*num2;
                    stk.push(val);
                }
                else{
                    int val=num2/num1;
                    stk.push(val);
                }
            }
            else{
            string val=tokens[i];
            int v=stoi(val);
            stk.push(v);
            
            }            
        }
        fval=stk.top();
        stk.pop();
        return fval;
    }
};
