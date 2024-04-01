#include <bits/stdc++.h>

using namespace std;

int main ()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string  n ; 
    char bien = 'A' ;
    
    while( getline ( cin , n ) )
    { 
        int dem = 1 , sum = 0 ;
        for( int i = 0 ; i < n.size() ; i++)
        {
            int s = n[i] - bien + 1 ;
            if( s == -32 ) s = 0 ;
            sum += s*dem ;
            dem++ ;
        }
        if( n == "#" ) return 0 ;
        cout << sum << endl ;
        
    }
    
}
