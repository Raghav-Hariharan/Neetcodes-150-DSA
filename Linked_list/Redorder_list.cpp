#Question: Reorder List
#Difficulty: Medium
#Approach: Traverse with fast, slow find middle of list and reverse that second half then join the first n second half in the way needed
#Link: https://leetcode.com/problems/reorder-list/submissions/2130039311
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=head;
        ListNode* tail=nullptr;

        while(fast && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* prev=nullptr;
        ListNode* second= slow->next;
        ListNode* next=second;
        slow->next=nullptr;
        while(second){
            next=second->next;
            second->next=prev;
            prev=second;
            second=next;
        }
        tail=prev;
        temp=head;
        while(temp && tail){
            next = temp->next;   
            prev = tail->next;   
            temp->next = tail;       
            tail->next = next;       
            temp = next;             
            tail = prev;
        }     
    }
};
