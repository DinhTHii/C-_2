#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string n ;
    getline( cin , n ) ;
    for( auto &x : n )
    {
        x = tolower(x) ;
    }
    map <char,int> mp ;
    for( auto x : n )
    {
        if( x >= 'a' && x <= 'z' )
        mp[x]++ ;
    }
    cout << mp.size() ;

}