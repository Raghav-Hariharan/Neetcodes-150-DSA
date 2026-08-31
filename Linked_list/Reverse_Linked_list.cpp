#Question: Reverse a give linked list
#Difficulty: Easy
#Approach: Traverse through the LL and keep flipping the pointers
#Link: https://leetcode.com/problems/reverse-linked-list/submissions/2126429255
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
    ListNode* reverseList(ListNode* head) {
        ListNode* newHead;
        ListNode* temp=head;
        ListNode* prev=nullptr;
        ListNode* next=temp;
        while(temp){
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        newHead=prev;
        return newHead;
    }
};
