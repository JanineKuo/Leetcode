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
    
    ListNode* deleteDuplicates( ListNode* head ) 
    {
        
        if ( ! head ) return NULL ;
        else if ( ! head->next ) return head ;
        
        
        ListNode* node = new ListNode() ;
        ListNode* current = new ListNode() ;
        
        node = head->next ;
        current = head ;
        
        while ( node->next )
        {
            
            if ( current->val != node->val ) 
            {
                current->next = node ;
                current = node ;
            }

            if ( node->next ) node = node->next ;
            else node->next = NULL ;   
            
        }
        
        
        if ( current->val != node->val ) current->next = node ; 
        else current->next = NULL ;
        
        return head ;
    }
    
};
