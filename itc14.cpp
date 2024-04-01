#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int a[n] ;
    map<int,int>mp ;
    for(int i = 0 ; i < n ; i++) 
    {
        cin >> a[i] ;
        mp[a[i]]++ ;
    }
    int max = 0 ;
    sort( a , a + n ) ;
    max = a[ n-1 ] ;
    int dem = 0 , demm = 0 ;
    for( int i = n-1 ; i >= 0 ; i--)
    {
        if( mp[a[i]] !=1 )
        {
            if( a[i] == max )
            {
                dem = mp[a[i]] ;
            }
            else if( a[i-1] == max-1 )
            {
                demm = mp[a[i-1]] ;
            }
        }
    }
    // if( dem != 1 && demm != 1 )
    // {
        cout << maxde;
    // }
}