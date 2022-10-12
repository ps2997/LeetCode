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
    
    ListNode* solve(ListNode* &list1, ListNode* &list2){
        
        
        if(list1->next==NULL){           // if there is only one node in the list
            list1->next = list2;
            return list1;
        }
        
        
        ListNode* curr1 = list1;
        ListNode* next1 = curr1->next;
        ListNode* curr2 = list2;
        ListNode* next2  = NULL;
        
        while((next1!=NULL) && (curr2!=NULL)){
            if((curr2->val >= curr1->val) && (curr2->val <= next1->val)){   
                // we update the pointers
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;
                
                // values updated
                curr1 = curr2;
                curr2 = next2;
                
            }else{
                curr1 = next1;
                next1 = next1->next;
                
                if(next1==NULL){            // we have reached the end of the first list
                    curr1->next = curr2;    // join the second list directly to the first list
                    return list1;
                }
            }
        }
        
        return list1;
        
        
        
    }
    
    
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1==NULL)
            return list2;
        
        if(list2==NULL)
            return list1;
        
        if(list1->val <= list2->val){
           return solve(list1, list2);
        }else{
           return solve(list2, list1);
        }
    }
};