class Solution {
public:
    
    int removeDuplicates( vector<int>& nums ) 
    {
        int crt = 0 ;    // current number
        int ans = 1 ;
        int last = 0 ;
       
        
        if ( nums.empty() ) return 0 ;
        else if ( nums.size() == 1 ) return 1 ;
       
        
        last = nums.size() ;  
        crt = nums.back() ;
        
        
        for ( int i=last-2 ; i>=0 ; i-- )
        {
            
            if ( nums[i] == crt ) nums.erase( nums.begin()+i ) ; 
            
            else
            {    
                crt = nums[i] ;
                ans ++ ;　
            }
  
        }
          
        return ans ;
    }
};
