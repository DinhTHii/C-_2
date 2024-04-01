#include<bits/stdc++.h>

using namespace std ;

// void in() 
// {
//     #ifndef ONLINE_JUDGE
//         freopen( "int.cpp" , "r" , stdin ) ;
//         freopen( "out.cpp" , "w" , stdout ) ;
//     #endif
// }
bool ktr(const string &a , const string &b ) 
{
    return a.length() < b.length();
}
void out() 
{
    string n ; cin >> n ;
    cin.ignore() ;
    string m ; getline( cin , m ) ;
    stringstream nn ( m ) ;
    string s = "" ;
    vector <string> vc , cuoi ;
    while( nn >> s )
    {
        vc.push_back( s ) ;
    }
    sort( vc.begin() , vc.end() ) ;

    for( int i = 0 ; i < (int)n.size() ; i++ )
    {
        for( auto x : vc )
        {
            if( n[i] == x[0] ) cuoi.push_back( x ) ;
        }
        sort( cuoi.begin() , cuoi.end() , ktr ) ;
        for( auto x : cuoi )
        {
            cout << x << " " ;
        }
        cuoi.clear() ;
    }
    
}
int main()
{
    //in() ;
    out() ;
    return 0 ;
}