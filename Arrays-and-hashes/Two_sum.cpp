#Question: Two sum
#Link: https://leetcode.com/problems/two-sum/submissions/2101830159
#Drawback of O(n^2) time complexity
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        for(auto i=nums.begin();i!=nums.end();i++){
            for(auto j=nums.begin();j!=nums.end();j++){
                if(i==j){
                    continue;
                }
                else if(*i+*j==target){
                    sol.push_back(i-nums.begin());
                    sol.push_back(j-nums.begin());
                    return sol;
                }
            }
        }
        return sol;
    }
};
