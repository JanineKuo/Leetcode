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
    
    ListNode* mergeTwoLists( ListNode* l1, ListNode* l2 ) 
    {
        if ( !l1 && !l2 ) return NULL;
        else if ( !l1 ) return l2;
        else if ( !l2 ) return l1;
        
        ListNode* head = new ListNode() ;
        ListNode* node = new ListNode() ;
        head = node ;
        
        while ( l1 != NULL || l2 != NULL )
        {   
            
            if ( l1 && l2 )
            {
                if ( l1->val > l2->val )
                {
                    node->val = l2->val ;
                    l2 = l2->next ;
                }    
                
                else if ( l2->val >= l1->val )
                {
                    node->val = l1->val ;
                    l1 = l1->next ;
                }    
            }    
            
            else if ( !l1 && l2 ) 
            {    
                node->val = l2->val ;
                l2 = l2->next ;
            }
            
            else if ( l1 && !l2 )
            {    
                node->val = l1->val ;
                l1 = l1->next ;
            }
            
            
            if ( l1 || l2 )
            {
                ListNode* nd = new ListNode() ;
                node->next = nd ;
                node = node->next;
            }
        }
        
        
        return head ;
    }
};
