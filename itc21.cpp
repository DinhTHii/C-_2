#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    int n , k , b ; 
    cin >> n >> k >> b ; 
    int a[b] ;
    for( int i = 0 ; i < b ; i++ )
    {
        cin >> a[i] ;
    }
    sort( a , a + b ) ;
    if( k > a[b-1] )
    {
        cout << b ;
        return 0 ;
    } 
    for( int i = 0 ; i < b ; i++ )
    {
        for( int j = 0 ; j < b ; j++ )
        {
            if( ( (j + i) <= b && (a[ j + i ] - a[j] ) >= k)  )
            {
                if( i != 0 ) cout << i ;
                else cout << i ;
                return  0 ;
            }
        }
    }
}