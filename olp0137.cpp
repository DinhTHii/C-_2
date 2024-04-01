#include <bits/stdc++.h>

using namespace std ;

string ktr( string m , string n , string p )
{
    string a = "" ;
    for( auto x : p )
    {
        bool dung = true ;
        for( int i = 0 ; i < m.length() ; i++ )
        {
            if( x == m[i] )
            {
                a += n[i] ;
                dung = false ;
                break ;
            }
        }
        if( dung )
        {
            a += x ;
        }
    }
    return a ;
}

int main()
{
    string m , n , p ;
    getline( cin , m ) ;
    getline( cin , n ) ;
    cout << n << endl << m << endl ;
    while( getline( cin , p ))
    {
        cout << ktr( m , n , p ) << endl ;
    }

}
