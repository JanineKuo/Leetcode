class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        
        int goalNum = 0 ;
        bool found = false ;
        vector<int> ans ;
        
        for ( int i=0 ; i < nums.size()-1 ; i ++ )
        {
            
            goalNum = target - nums[i] ;

            for ( int j=i+1 ; j < nums.size() ; j ++ )
            {

                if ( nums[j] == goalNum )
                {
                    ans.push_back( i ) ;
                    ans.push_back( j ) ;
                    found = true ;
                    break ;
                } // if

            } // for 
                
            
            if ( found ) break ;
            
        } // for  
        
        return ans ;
    }        

};
