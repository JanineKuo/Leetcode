class Solution {
public:
    
    vector<int> plusOne( vector<int>& digits ) 
    {
        bool carry = false ;
        
        if ( digits[digits.size()-1] == 9 ) 
        {    
            digits[digits.size()-1] = 0 ;
            carry = true ;
        }
        
        
        else digits[digits.size()-1] ++ ;
        
        
        for ( int i=digits.size()-2 ; i>=0 ; i-- )
        {
            if ( carry ) 
            {
                if ( digits[i] == 9 )
                {
                    digits[i] = 0 ;
                    carry = true ;
                }
                
                else
                {
                    digits[i] ++ ;
                    carry = false ;
                }
            }
        } 
        
        if ( carry ) digits.insert( digits.begin(), 1 ) ;       
        
        return digits ;
    }
    
};
