#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int a[n] , b[n] ;
    string m ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] >>b[i] ;
    }    
    for( int i = 0 ; i < n ; i++ )
    {
        m += to_string( a[i] + b[i] ) ;
    }
    sort( m.begin() , m.end() , greater<char>());
    cout << m ;
}