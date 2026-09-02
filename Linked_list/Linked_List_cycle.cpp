#Question: Linked list cycle
#Difficulty: Easy
#Initital Approach: Use a set and insert value if it doesnt exist in set, if it does loop confirmed
#Problem: Duplicate value LLs are overlooked
#Actual Approach: Use a fast and slow pointer, check if fast catches upto slow
#Link: https://leetcode.com/problems/linked-list-cycle/submissions/2127949068
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        if(head==nullptr) return false;
        ListNode* slow=head;
       while(fast != nullptr && fast->next != nullptr){
            if(slow->next==nullptr || fast->next->next==nullptr) return false;
            if(fast->next==slow || fast->next->next==slow) return true;
            fast=fast->next->next;
            slow=slow->next;
        }
        return false;
    }
};
