#include<bits/stdc++.h>

using namespace std ;

bool ktr( string n )
{
    string m(rbegin() , rend() ) ;
    for( int i = 0 ; i < n.size() ; i++ )
    {
        if( m[i] != n[i] ) return false ;
    }
    return true ;
}
void ban_la_nhat( string n , int dau , int duoi )
{

}
int main()
{
    int n ;
    cin >> n ;
    
    while( n-- )
    {
        string m ; cin >> m ;
        int dau = 0 , duoi = 1 ;
        ban_la_nhat( m , dau , duoi ) ;
    }
}