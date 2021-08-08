class Solution {
public:
    
    int reverse( long x ) 
    {
        long tmpx = 0 ;       // 正的x
        long d = 10 ;         // 除數 Divisor
        long q = 0 ;          // 商   Quotient
        long r = 0 ;          // 餘數 Remainder
        long ten = 1 ;        // 10的次方數
        int time = 0 ;        // 次方數
        long ans = 0 ;        // 答案
        bool stop = false ;
        
        

        if ( x < pow( 2, 31 ) && x >= pow( -2, 31 ) ) 
        {
            // === 設tmpx為正的x ===
            tmpx = x ; 
            if ( x < 0 ) tmpx *= -1 ;
            
            
            // === 看看tmpx是幾位數 ===
            while ( tmpx >= ten )
            {
                ten *= 10 ;
                time ++ ;
            }
            
            
            // === REVERSE INT ===
            ten /= 10 ;            
            while ( time > 0 )
            {
                r = tmpx % 10 ;
                ans += ( r * ten ) ;
                
                tmpx /= 10 ;
                ten /= 10 ; 
                time -- ;
            }

            
            // === 正負和大小 ===
            if ( x < 0 ) ans *= -1 ;
            if ( ans < pow( 2, 31 ) && ans >= pow( -2, 31 ) ) return ans ;
            else return 0 ;

        }
        
        else return 0 ;
           
    } // reverse()
    
};
