#Question: Group Anagrams
#Difficulty: Medium
#Initial Approach: A triple for loop checking frequency class of each string in the list and adding it to map. Time limit exceeded
#Easier Approach: A map with keys are frequency class and strings as values leading to O(n^2 x k) time complexity
#Link:https://leetcode.com/problems/group-anagrams/submissions/2107021127
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        map<vector<int>, vector<string>> group;
        int n=strs.size();
        for(int i=0;i<n;i++){
            vector<int> count(26,0);
            for(int j=0;j<strs[i].size();j++){
                count[strs[i][j]-'a']++;
            }
            group[count].push_back(strs[i]);
        }
        for(auto x: group){
            sol.push_back(x.second);
        }
        return sol;
    }

};
