class Solution {
public:
    
    int mySqrt( int x ) 
    {
        // x = sqrt( x ) ;
        // return x ;
        
        
        if ( x == 0 ) return 0 ;
        else if ( x < 4 ) return 1 ; 
        else if ( x == 4 ) return 2 ;
        
        
        int ans = -1 ;
        for ( long i=2 ; i<=x/2 && ans == -1 ; i++ )
            if ( i*i <= x && (i+1)*(i+1) > x ) ans = i ;   
        
        return ans ;
    }
    
};
