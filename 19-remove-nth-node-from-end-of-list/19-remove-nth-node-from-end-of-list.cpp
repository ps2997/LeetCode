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
        int ct = 0;
        
        while(temp!=NULL){
            temp=temp->next;
            ct++;
        }
        
        return ct;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next==NULL){
            head = NULL;
            return head;
        }
        ListNode* temp = head;
        int pos = getLen(head)- n; // 3
        if(pos==0){
            // temp = head->next;
            head = head->next;
        }
        // ListNode* temp = head;
        int ct=0;
        
        while(ct<pos-1){
            temp = temp->next;
            ct++;
        }
        ListNode* curr = temp->next->next;
        temp->next = curr;
        return head;
    }
};