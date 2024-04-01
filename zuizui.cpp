#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string n ;
    cin >> n ;
    if( n[0] == '-') 
    {
        n.erase( 0 , 1 ) ;
        cout << "-" ;
    }
    if( n.size() == 2 && n[1] == '0' ) 
    {
        cout << n[0] ;
        return 0 ;
    }
    int size = n.size() ;
    if( size == 1 ) 
    {
        cout << n[0] ;
        return 0 ;
    }
    for(int i = n.length()-1 ; i >= 0  ; i--)
    {
        if( n[i] != '0' )
        {
            break ;
        }
        n.erase( i , 1 ) ; 
    }
    cout << n[n.length()-1] ;
    for(int i = 1 ; i < n.length()-1 ; i++)
    {
        cout << n[i] ;
    }
    if( size != 1) cout << n[0] ;
}