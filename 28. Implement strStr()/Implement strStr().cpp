class Solution {
public:
    
    
    int strStr( string haystack, string needle ) 
    {
        if ( needle.empty() ) return 0 ;
        else if ( haystack.size() < needle.size() ) return -1 ;
        
        
        int ans = -1 ; 
        string tmp = "" ;
        
      
        for ( int i=0 ; i<=haystack.size()-needle.size() ; i++ )
        {
            if ( haystack[i] == needle[0] )
            {
                tmp = haystack.substr( i, needle.size() ) ;
                if ( tmp == needle ) 
                {
                    ans = i ;
                    break ;
                }                    
            }         
        }
        
        return ans ;
    }

};
