#Question: Is Anagram
#Initial approach: Create vectors and then remove letter from one if it exists in the other while iterating through the string, add it to solution string.
#Problem: Unnessecarily complex 
#Actual approach: Create an array with 26 indexes as values for each alphabet, add value for each iteraton and on the other subtract values. If all values of array is 0 return true
#Link: https://leetcode.com/problems/valid-anagram/submissions/2102581213
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={0};
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            count[t[i]-'a']--;
        }
        for(int i=0; i<26;i++){
            if(count[i]!=0) return false;
        }
        return true;
    }
};
#Time complexity: O(n)
