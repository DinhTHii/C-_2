#include <bits/stdc++.h>

using namespace std ;

bool songuyento( double n ) 
{
    if( n != ceil(n) || n <= 1 ) return false ;
    int m = n ;
    for(int i = 2 ; i*i <= m ; i++)
    {
        if( m%i == 0 ) return false ;
    }
    return true ;
}

int ntonhonhat( int n )
{
    double a[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    int min = INT_MAX ;
    for(int i = 0 ; i < n ; i++)
    {
        if( songuyento( a[i] ) )
        {
            if( a[i] < min )
            {
                min = a[i] ;
            }
        }
        
    }
    return min ;
}

int main()
{
    int n ; cin >> n ;
    int min = ntonhonhat(n) ;
    if( min != INT_MAX ) cout << min ;
    else cout << "Khong co" ; 
}