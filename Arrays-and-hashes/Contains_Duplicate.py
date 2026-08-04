#Question: Contains Duplicate
#Initial approach: double for loop comparission but time complexity goes to O(n^2)
#Solution approach: Use a set and check using one for loop adding to the set if its not there. If it is return true else False
#link: https://leetcode.com/problems/contains-duplicate/submissions/2094176992
#Code:
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seta = set()
        for i in nums:
            if i in seta:
                return True
            else:
                seta.add(i)
        return False
#Time comlexity: O(n)      
