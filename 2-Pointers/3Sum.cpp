#Question: 3Sum 
#Difficulty: Medium
#Approach: Fix one number and bring it to 2 sum, one for loop then inside it a while loop for 2 sum
#Link:https://leetcode.com/problems/3sum/submissions/2116547427
#Time complexity: O(n^2)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) break;
            int left=i+1;
            int right=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1]) continue;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum>0) right--;
                else if(sum<0) left++;
                else{
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    sol.push_back(temp);
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1]) left++;
                    while(left < right && nums[right] == nums[right+1]) right--;
                }
            }
        }
        return sol;

    }
};
