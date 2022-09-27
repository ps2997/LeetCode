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
    
    int getLen(ListNode* head){
         ListNode* temp = head;
        int ct=0;
        
        while(temp!=NULL){
            temp = temp->next;
            ct++;
        }
        int midVal = ct/2;
        return midVal;
    }
    
    
    ListNode* middleNode(ListNode* head) {
       
      ListNode* temp = head;
      
        int ans = getLen(head);
        int val = 0;
        while(val < ans){
            temp = temp->next;
            val++;
        }
       
        return temp;
    }
};