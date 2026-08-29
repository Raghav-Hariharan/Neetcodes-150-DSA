#Question: Car Fleet
#Difficulty: Medium
#Approach: Sort the speed and position based on position in descending order since only the slow cars affer the faster, calculate time for each car and push into a stack, compare the times of the cars to determine if there is a fleet or no
#Link: https://leetcode.com/problems/car-fleet/submissions/2124318868
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleet=0;
        stack<float> stk;
        vector<pair <int,int>> t;
        for(int i=0;i<speed.size();i++){
            t.push_back({position[i],speed[i]});
        }
        sort(t.begin(),t.end(),greater<pair<int,int>>());
        for(int i=0;i<t.size();i++){
            float time=(float)(target-t[i].first)/t[i].second;
            if(stk.empty()){
                stk.push(time);
                fleet++;
            }
            if(stk.top()<time){
                stk.push(time);
                fleet++;
            }
            else continue;
        }
        return fleet;
    }
};
