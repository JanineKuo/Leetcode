class Solution {
public:
    

    bool isValid( string s ) 
    {
        vector <char> stack ;
        
        for ( int i=0 ; i<s.size() ; i++ )
        {    
            if( s[i] == '(' ) stack.push_back( ')' ) ;
            else if ( s[i] == '[' ) stack.push_back( ']' ) ;
            else if ( s[i] == '{' ) stack.push_back( '}' ) ;
        
            else if ( s[i] == ')' )
            {    
                if ( !stack.empty() && stack.back() == ')' ) stack.pop_back() ;
                else return false ;
            }
            
            else if ( s[i] == ']' )
            {
                if ( !stack.empty() && stack.back() == ']' ) stack.pop_back() ;
                else return false ;
            }    
            
            else if ( s[i] == '}' )
            {
                if ( !stack.empty() && stack.back() == '}' ) stack.pop_back() ;
                else return false ;
            }    
        } 
        
        if ( stack.empty() ) return true ;
        else return false ;
    }  
        
    
};
