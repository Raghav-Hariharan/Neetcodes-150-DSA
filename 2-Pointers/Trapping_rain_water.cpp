#Question: Trapping Rain Water
#Difficulty: Hard
#Approach: Use 2 max variables for left and right cuz water can only start after them and calculate using them as reference
#Link: https://leetcode.com/problems/trapping-rain-water/submissions/2117685564
#Time complexity: O(n)
class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int left=0;
        int right=height.size()-1;
        int leftMax=0;
        int rightMax=0;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftMax){
                    leftMax=height[left];
                }
                else water += leftMax-height[left];
                left++;
            }
            else{
                if(height[right]>=rightMax){
                    rightMax=height[right];
                }
                else water+=rightMax-height[right];
                right--;
            }
                
        }
        return water;
    }
};
