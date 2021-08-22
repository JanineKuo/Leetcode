class Solution {
public:
    int removeElement( vector<int>& nums, int val ) 
    {
        int ans = 0 ;
        
        ans = nums.size() ;
        
        for ( int i=nums.size()-1; i>=0; i-- )
        {
            if ( nums[i] == val ) 
            {    
                nums.erase( nums.begin()+i ) ;
                ans -- ;
            }    
        }
        
        return ans ;
    }
};
