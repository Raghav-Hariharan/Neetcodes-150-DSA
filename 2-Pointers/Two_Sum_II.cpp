#Question: Two Sum II-Input array is sorted
#Difficulty: Medium
#Initial approach: Use the regular two sum approach. It led to time limit exceeding since its O(n^2)
#Actual approach: Use 2 pointers left and right, since it can give O(n) time complexity
#Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/2114186579
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int left=0;
       int right=numbers.size()-1;
       vector<int> sol;
       while(left<right){
        if(numbers[left]+numbers[right]==target){
            sol.push_back(left+1);
            sol.push_back(right+1);
            return sol;
        }
        else if(numbers[left]+numbers[right]<target){
            left++;
        }
        else right--;
       }
       return sol;
    }
};
