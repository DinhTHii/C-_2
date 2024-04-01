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
    string n ; cin >> n ;
    cin.ignore() ;
    string m ; getline( cin , m ) ;
    stringstream nn ( m ) ;
    string s = "" , ss = "" ; 
    vector <string> vc ;
    while( nn >> s )
    {
        for( auto &x : s )
        {
            x = tolower(x) ;
        }
        vc.push_back( s ) ;
    }
    sort( vc.begin() , vc.end() ) ;
    for( int i = 0 ; i < (int)n.size() ; i++ )
    {
        for( auto x : vc )
        {
            if( n[i] == x[0] )
            {
                cout << x << " " ;
            }
        }
    }
    
}
int main()
{
    in() ;
    out() ;
    return 0 ;
}