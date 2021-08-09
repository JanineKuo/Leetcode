class Solution {
public:
    
    bool isPalindrome( int x ) 
    {
        
        if ( x < 0 ) return false ;
        else if ( x >= 0 && x < 10 ) return true ;
        
        else 
        {
            int tmp = 0 ;
            int r = 0 ;     // 最小位數 Remainder
            int q = 0 ;     // 最大位數 Quotient
            long ten = 1 ;  // 10的次方數
            int time = 0 ;  // 檢查次數   
              
            tmp = x ;    
             
            
            // === 看看tmpx是幾位數 ===
            while ( tmp >= ten )
            {
                ten *= 10 ;
                time ++ ;
            }
            
            time /= 2 ;
            ten /= 10 ;
            
            
            // === 看看有沒有回文 ===
            while ( time > 0 )
            {
                r = tmp % 10 ;    // 最小位數
                q = tmp / ten ;   // 最大位數
                
                if ( r != q ) return false ;
                else 
                {
                    tmp -= ( q * ten ) ;    // 去除tmp最大位數
                    tmp /= 10 ;             // 去除tmp最小位數
                    ten /= 100 ;            // 調整tmp位數
                    time -- ;               // 檢查次數減1
                }
            }
            
            if ( r == q ) return true ;
            else return false ;
        }
        
    }
};
