#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n ; cin >> n ;
    string x[n+1] ;
    for (  int i = 0 ; i < n+1 ; i++)
    {
        getline( cin , x[i] ) ;
    }

    for (  int i = 1 ; i < n+1 ; i++)
    {
        cout << "Case #" << i << ": " ;
        for( int j = 0 ; j < x[i].size() ; j++)
        {
            if( x[i][j] == ' ' ) cout << "%20" ;
            else if( x[i][j] == '!' ) cout << "%21" ;
            else if( x[i][j] == '$' ) cout << "%24" ;
            else if( x[i][j] == '%' ) cout << "%25" ;
            else if( x[i][j] == '(' ) cout << "%28" ;
            else if( x[i][j] == ')' ) cout << "%29" ;
            else if( x[i][j] == '*' ) cout << "%2a" ;
            else cout << x[i][j] ;
        }
        cout << endl ;
    }
    
}