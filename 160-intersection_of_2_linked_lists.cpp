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
    
        ListNode* intersectionPoint(ListNode* t1, ListNode* t2, int d){
            while(d){
                d--;
                t2 = t2->next;
            }
            while(t1 != t2){
                t1 = t1->next;
                t2 = t2->next;
            }
    
            return t1;
        }
    
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            ListNode* temp1 = headA;
            ListNode* temp2 = headB;
            int l1 = 0, l2 =0;
            while(temp1 != nullptr){
                l1++;
                temp1 = temp1->next;
            }
            while(temp2 != nullptr){
                l2++;
                temp2 = temp2->next;
            }
    
            if (l1 < l2){
                return intersectionPoint(headA, headB, l2-l1);
            }
            else{
                return intersectionPoint(headB, headA, l1-l2);
            }
        }
    };