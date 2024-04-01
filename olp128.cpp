#include<bits/stdc++.h>

using namespace std ;

bool ktr( string n )
{
    string m(n.rbegin() , n.rend()) ;
    for( int i = 0 ; i < (int)n.size() ; i++ )
    {
        if( m[i] != n[i] )
        {
            return false ;
        }
    }
    return true ;
}

bool dung = true ;

void cx_la_ktr_nhung_khac_cai_tren( string n , int dau , int cuoi )
{
    string q ;
    for( int i = dau ; i < (int)n.size() - cuoi ; i++ )
    {
        q += n[i] ;
    }
    if( ktr(q) )
    {
        cout << q << endl ;
        dung = false ;
    }
}

int main()
{
    int n , m ; cin >> n >> m ;
    string a ; cin >> a ;
    int dau = m , cuoi = 0 ;
    while( dung )
    {
        cx_la_ktr_nhung_khac_cai_tren( a , dau , cuoi ) ;
        dau-- ;
        cuoi++ ;
        if( cuoi > m ) 
        {
            cout << "No" << endl ;
            return 0 ;
        }
    }
}