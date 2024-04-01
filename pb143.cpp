#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    int n ; cin >> n ;
    int a[n] ;
    map<int , int> mp ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
        mp[a[i]]++ ;
    }
    sort( a , a + n ) ;
    int min = a[0] , max = a[n-1] ;
    cout << mp[1] ;

}