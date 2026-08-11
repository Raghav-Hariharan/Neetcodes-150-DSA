#Question: Two sum
#Link: https://leetcode.com/problems/two-sum/submissions/2101830159
#Initial approach: Doubel for loop iterate (worked)
#Drawback of O(n^2) time complexity
#Actual approach: Use map and find the value of target-current value in the map 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> arr;
        vector<int> sol;
        for(int i=0; i<nums.size();i++){
            int ans=target-nums[i];
            if(arr.find(ans)!=arr.end()){
                return {arr[ans],i};
            }
            arr[nums[i]]=i;
        }
        return{};
    }
};

#Time complexity O(n)
