#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    int m , n , t ; cin >> m >> n >> t ;
    int a[m][n] ;
    for( int i = 0 ; i < m ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
        {
            cin >> a[i][j] ;
        }
    }
    while( t-- )
    {
        int q , b , c , d ;
        cin >> q >> b >> c >> d ;
        long long tong = 0 ;
        for( int i = q - 1 ; i < c ; i++ )
        {
            for( int j = b - 1 ; j < d ; j++ )
            {
                tong += a[i][j] ;
            }
        }
        cout << tong << endl ;
    }
}