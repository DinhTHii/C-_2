#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    int a, b, c, d ; cin >> a >> b >> c >> d ;
    long long dem = 0 ;
    for( int i = a ; i <= b ; i++ )
    {
        if( i < c )
        {
          dem += d - c + 1 ;
        }
        else if( i >= c && i < d )
        {
            dem += d - i ;
        }
    }
    cout << dem ;
}