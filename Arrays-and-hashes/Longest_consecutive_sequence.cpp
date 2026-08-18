#Question: Longest consecutive sequence
#Difficulty: Medium
#Approach: Create a sorted array and then check for sequences
#Time complexity: O(n)
#Link: https://leetcode.com/problems/longest-consecutive-sequence/submissions/2111765044
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> a(nums.begin(), nums.end());
        if(a.empty())
            return 0;
        int maxCount=0;
               
        for(auto x:a){
            if(a.find(x-1)==a.end()){
                int current =x;
                int count=1;
                while(a.find(current+1)!=a.end()){
                    current++;
                    count++;
                }
            if(count>maxCount) maxCount=count;
            }
        }

        return maxCount;
    }
};
