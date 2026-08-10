#Question: Contains Duplicate
#Initially: Made coding error on iterator using iterator in the seen condition
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
