#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    int n ; cin >> n ;
    int a[n] ;
    map < int , int > mp ;
    
    for( int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        mp[a[i]]++ ;
    }
    if( n%2 == 0 )
    {
        cout << "no" ; return 0 ;
    }
    int dem = 0 , tinh = 1 ;
    for( int i = 0 ; i <= n/2 ; i++)
    {
        if( a[i] == tinh )
        {
            tinh++ ;
        }
        else 
        {
            cout << "no" ; return 0 ;
        }
    }
    
    for( auto x : mp )
    {
        if( x.second != 2 )
        {
            dem++ ;
            if( dem >= 2 ) 
            {
                cout << "no" ; return 0 ;
            }
        }
    }
    cout << "yes" ;
}