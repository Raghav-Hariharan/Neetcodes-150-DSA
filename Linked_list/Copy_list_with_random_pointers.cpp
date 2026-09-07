#Question: Copy list with random pointers
#Difficulty: Medium
#Approach: Use an unordered map and map the original node to a new one and then give those new values the random and next pointers by checking the original list
#Link: https://leetcode.com/problems/copy-list-with-random-pointer/submissions/2133270285
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        unordered_map <Node*, Node*> m;
        Node* temp=head;
        while(temp){
            m[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            m[temp]->next=m[temp->next];
            m[temp]->random=m[temp->random];
            temp=temp->next;
        }
        return m[head];
    }
};
