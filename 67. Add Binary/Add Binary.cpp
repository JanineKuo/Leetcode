class Solution {
public:
    
    string addBinary( string a, string b ) 
    {
        int ai = a.size()-1 ;
        int bi = b.size()-1 ;
        bool carry = false ; 
        
        
        if ( a.size() >= b.size() )
        {
            for ( int i=0 ; i<a.size() ; i++ )
            {

                // ===== carry =====
                if ( carry )
                {
                    if ( a[ai-i] == '0' )
                    {
                        a[ai-i] = '1' ;
                        carry = false ;
                    }
                    
                    else if ( a[ai-i] == '1' ) a[ai-i] = '0' ;
                }    
                
                
                // ===== a+b =====
                if ( i<b.size() )
                {    
                    if ( a[ai-i] == '0' && b[bi-i] == '1' ) a[ai-i] = '1' ;   // 0+1=1
                    else if ( a[ai-i] == '1' && b[bi-i] == '1' )              // 1+1=0
                    {    
                        a[ai-i] = '0' ;
                        carry = true ; 
                    }
                    
                } 
    
            } 
            
            if ( carry ) a.insert( 0, "1" ) ;           
        }    
           
        
        
        else if ( b.size() > a.size() )
        {
            for ( int i=0 ; i<b.size() ; i++ )
            {
                
                // ===== carry =====
                if ( carry )
                {
                    if ( b[bi-i] == '0' )
                    {
                        b[bi-i] = '1' ;
                        carry = false ;
                    }
                    
                    else if ( b[bi-i] == '1' ) b[bi-i] = '0' ;
                }    
                
                
                // ===== a+b =====
                if ( i<a.size() )
                {    
                    if ( b[bi-i] == '0' && a[ai-i] == '1' ) b[bi-i] = '1' ;   // 0+1=1
                    else if ( b[bi-i] == '1' && a[ai-i] == '1' )              // 1+1=0
                    {    
                        b[bi-i] = '0' ;
                        carry = true ; 
                    }
                }    
                    
            } 
            
            if ( carry ) b.insert( 0, "1" ) ; 
        } 
        
      
      
        if ( a.size() >= b.size() ) return a ;
        else return b ;
        
    }
};
