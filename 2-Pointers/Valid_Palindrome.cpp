#Question: Valid Palindrome
#Difficulty: Easy
#Approach: Remove all non alphabetic characters from string and use 2 pointers left and right
#Link: https://leetcode.com/problems/valid-palindrome/submissions/2113511471
#Time complexity: O(n)
class Solution {
public:
    bool isPalindrome(string s) {
        string clear;
        string alpha="ABCDESGHIJKLMNOPQRSTUVWXSYZabcedfghijklmnopqrstuvwxyz";
        if(s.size()==1){
            return true;
        }
        
        for(int i = 0; i < s.size(); i++) {
            if(!isalnum(s[i]))
                continue;
            else {
                clear.push_back(tolower(s[i]));
            }
        }
        if(clear.size()==0) return true;
        int left=0;
        int right=clear.size()-1;
        while(left<right){
            if(clear[left]!=clear[right]) return false;
            else{
                left++;
                right--;
            }
        }
        return true;
        }   
};
