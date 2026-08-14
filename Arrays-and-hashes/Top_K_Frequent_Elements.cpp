#Question: Top K Frequent Elements
#Approach: Use a map with key as number and value as the freqeuency, sort it and then a for loop to find k elemnts. 
#Time Complexity: O(n logn)
#Link: https://leetcode.com/problems/top-k-frequent-elements/submissions/2107045924
class Solution {
public:
    static bool compare(pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> sol;
        map<int, int> val;
        vector<pair<int,int>> v; 
        for(int i=0;i<nums.size();i++){
            if(val.find(nums[i])==val.end()){
                val[nums[i]]=1;
            }
            else{
                val[nums[i]]++;
            }
        }
        for(auto x:val){
            v.push_back(x);
        }
        sort(v.begin(),v.end(),compare);
        for(int i=0;i<k;i++){
            sol.push_back(v[i].first);
        }
        return sol;

        }
};
