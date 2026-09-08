#Question: Add 2 numbers
#Difficulty: Medium
#Approach: Traverse linked list normally and add the numbers while creating new node in new linked list
#Link: https://leetcode.com/problems/add-two-numbers/submissions/2135602558
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        int carry=0;
        ListNode* newHead=new ListNode;
        ListNode* t3=newHead;
        while(t1 || t2 || carry){
            int v=0;
            if(t1 && t2){
                v=t1->val+t2->val+carry;
                t1=t1->next;
                t2=t2->next;
            }
            else if(t1){
                v=t1->val+carry;
                t1=t1->next;
            }
            else if(t2){
                v=t2->val+carry;
                t2=t2->next;
            }
            else v=carry;
            if(v>=10){
                v-=10;
                carry=1;
            }
            else carry=0;
            t3->val=v;
            if(t1||t2||carry){
            
            t3->next = new ListNode;
            t3 = t3->next;
            }
        }
        return newHead;
    }
};
