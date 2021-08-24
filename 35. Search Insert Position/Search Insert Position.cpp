class Solution {
public:
    
    int searchInsert( vector<int>& nums, int target ) 
    {
        int i = nums.size() / 2 ;    // start from middle index
        int ans = 0 ;
           

        if ( target <= nums[i] ) 
        {
            for ( i=i ; i>=0 ; i-- )
            {
                if( nums[i] == target )
                {
                    ans = i ;
                    break ;
                } 
                
                else if ( i-1>=0 && nums[i]>target && nums[i-1]<target ) 
                {
                    ans = i ;
                    break ;                    
                }  
                
            } 
            
        } 
        
        
        else
        {
             for ( i=i ; i<nums.size() ; i++ )
            {
                if( nums[i] == target )
                {
                    ans = i ;
                    break ;
                } 
                 
                else if ( i+1<nums.size() && nums[i]<target && nums[i+1]>target ) 
                {
                    ans = i+1 ;
                    break ;                    
                }
                 
                else if ( i==nums.size()-1 ) 
                {
                    ans = nums.size() ;
                    break ;                     
                }    
                    
            }            
        } 
        
        return ans ;
    }
};
