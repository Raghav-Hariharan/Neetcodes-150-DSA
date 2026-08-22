#Question: Find container with most water from array
#Approach: Use a max variable and compare area of each container and traverse by moving to the lower of 2 values
#Difficulty: Medium
#Link:https://leetcode.com/problems/container-with-most-water/submissions/2116594543
#Time complexity: O(n)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxa=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int width=right-left;
            int high=min(height[left],height[right]);
            int temp= width*high;
            maxa=max(temp,maxa);
            if(height[left]>height[right]) right--;
            else left++; 
        }
    return maxa;
    }

};
