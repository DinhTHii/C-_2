#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string n ;
    while( cin >> n )
    {
        int dem = 1 ;
        for( auto x : n )
        {
            if( x >= 'A' && x <= 'Z' )
            {
                dem++ ;
            }
        }
        cout << dem << endl ;
    }
}