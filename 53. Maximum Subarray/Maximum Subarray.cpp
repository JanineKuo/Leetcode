class Solution {
public:
    
    int maxSubArray( vector<int>& nums ) 
    {
        int global = nums[0] ;   
        int current = 0 ;   
        
        for ( int i=0 ; i<nums.size() ; i++ )
        {
            current = max( nums[i], current+nums[i] ) ;
            if ( current > global ) global = current ;
        }    
        
        return global ;
    }
};
