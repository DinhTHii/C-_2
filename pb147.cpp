#include<bits/stdc++.h>

using namespace std ;

void in() 
{
    #ifndef ONLINE_JUDGE
        freopen( "int.cpp" , "r" , stdin ) ;
        freopen( "out.cpp" , "w" , stdout ) ;
    #endif
}
void out() 
{
    int n , m ;
    cin >> n >> m ;
    cin.ignore() ;
    string s ;
    cin >> s ;
    vector <char> vc ;
    for( int i = 0 ; i < n-1 ; i++ )
    {
        vc.push_back(s[i]) ;
    }
    for( int i = m -1; i >= n -1 ; i-- )
    {
        vc.push_back(s[i]) ;
    }
    for( int i = m ; i < s.size() ; i++ )
    {
        vc.push_back(s[i]) ;
    }
    for( auto x : vc )
    {
        cout << x ;
    }
}
int main()
{
    in() ;
    out() ;
    return 0 ;
}