#Question: Remove nth node from the end of list
#Difficulty: Medium
#Approach: Get length of list, subtract n from it and traverse to that node and remove it 
#Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/2131094548
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;
        ListNode* prev=head;
        int traverse=count-n;
        if(traverse==0){
            head = head->next;
            return head;
        }
        while(traverse>0){
            prev=temp;
            temp=temp->next;
            traverse--;
        }
        prev->next=temp->next;
        return head;
    }
};
