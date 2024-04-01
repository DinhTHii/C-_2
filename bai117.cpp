#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    string n ;
    getline( cin , n ) ;
    string s , x  ;
    int i = 0 ;
    for( i  ; i < (int)n.length() ; i++ )
    {
        if( (n[i] == '-' || n[i] == '_' || n[i] == ';' || n[i] == '.' || n[i] == ',' || n[i] == '/' || n[i] == '|') ) break ;
    }
    for( i  ; i < (int)n.length() ; i++ )
    {
        if( n[i] >= '0' && n[i] <= '9' ) 
        {
            s += n[i] ;
            
        }
        else if( s != "" && (n[i] == '-' || n[i] == '_' || n[i] == ';' || n[i] == '.' || n[i] == ',' || n[i] == '/' || n[i] == '|') ) break ;
    }
    for( i ; i < (int)n.size() ; i++ )
    {
        if( n[i] >= '0' && n[i] <= '9' ) 
        {
            x += n[i] ;
            
        }
        else if( x != "" && ( n[i] == '-' || n[i] == '_' || n[i] == ';' || n[i] == '.' || n[i] == ',' || n[i] == '/' || n[i] == '|') ) break ;
    }
    long long sum = abs((stoi(x) - stoi(s))*12) ;
    cout <<  sum << "00";

}