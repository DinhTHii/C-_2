#include <bits/stdc++.h>

using namespace std ;

int xuatquynhapthan( int n ){
    map<int,int> mp ;
    int a[n] , b[n] , z = 0 , s = 0 ;
    while( n-- )
    {
        int x ; cin >> x ; 
        mp[x]++ ;
        a[z] = x ;
        z++ ;
    }

    int max = INT_MIN ;
    
    for( auto x : mp )
    {
        if( x.second > max ){
            max = x.second ;
        }
    }
    for( auto x : mp )
    {
        if( max == x.second )
        {
            b[s] = x.first ;
            s++ ;
        }
    }
    for( int i = 0 ; i <= z+1 ; i++ )
    {
        for( int j = 0 ; j <= s+1 ; j++ )
        {
            if( b[j] == a[i] ) 
            {
            cout << a[i] ;
            return 0 ;
            }
        }
    }
    return n ;
}

int main (){
    int n ; 
    cin >> n ;
    xuatquynhapthan( n ) ;
}