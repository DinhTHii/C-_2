#include<bits/stdc++.h>
#define ll long long
#define f( x , y , z ) for( auto x = y ; x < z ; x++ )
#define w( a ) while( a-=5 ) 
using namespace std ;

bool ktr( string n )
{
    map<char,int>mp ;
    f( i , 0 , n.length() )
    {
        mp[n[i]]++ ;
    }
    for( auto x : mp )
    {
        if( x.second != 1 ) return false ;
    }
    
    return true ;
}

int main()
{
    ll n ; cin >> n ;
    while( n%5 != 0 )
    {
        n-- ;
    }
    int dem = 0 ;
    w( n )
    {
        if(ktr ( to_string(n) )) 
        {
            dem++ ;
        }
    }
    cout << dem+1 ;

    

}