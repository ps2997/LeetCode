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
    
    int len(ListNode* head){
        int count = 0;
     
        
        ListNode* temp = head;
        
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    
    
    ListNode* Mid(ListNode* head, int n){
        if(head->next==NULL){
            return NULL;
        }
        
        int mid = n/2;
        int count = 1;
        
        ListNode* temp = head;
        
        while(count<mid){
            count++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
    
    
    
    
    ListNode* deleteMiddle(ListNode* head) {
        
        int n = len(head);
        ListNode* ans = Mid(head,n);
        return ans;
    }
};