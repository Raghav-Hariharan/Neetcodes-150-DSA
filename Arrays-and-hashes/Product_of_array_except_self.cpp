#Question: Product of array except self
#Level: Medium
#Initial Approach: for loop through a solution vector, call a function to calculate that positions value. O(n^2) but needed solution in O(n)
#Actual approach: 2 different for loops, one multiplies the left and puts that value into solution vector and then next from right multiplying with solution vector
#Link:https://leetcode.com/problems/product-of-array-except-self/submissions/2109394154
class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sol(nums.size());
        int temp=1;
        int right=nums.size();
        for(int i=0;i<right;i++){
            sol[i]=temp;
            temp=temp*nums[i];
        }
        temp=1;
        for(int i=right-1;i>=0;i--){
            sol[i]=sol[i]*temp;
            temp=temp*nums[i];
        }
    return sol;
    }
};
#Time complexity: O(n)
