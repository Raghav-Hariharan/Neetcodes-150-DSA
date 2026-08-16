#Question: Contains Duplicate
#Difficulty: Easy
#Initially: Made coding error on iterator using iterator in the seen condition
#link: https://leetcode.com/problems/contains-duplicate/submissions/2101788168
#Final solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> seen;
        for(auto it=nums.begin();it!=nums.end();it++){
            if(seen.find(*it)!=seen.end()){
                return true;
            }
            else{
                seen.insert((*it));
            }

        }
        return false;
        
    }
};
