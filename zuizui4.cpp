#include<bits/stdc++.h>

using namespace std ;

int ktra(int n )
{
    for(int i = n - 1 ; i >= 2 ; i--)
    {
        if( sqrt(i) == ceil(sqrt(i)) ) return i ; 
    }
    return 1 ;
}

int main ()
{
    int n ; cin >> n ;
    if( sqrt(n) == ceil(sqrt(n))) cout << "YES" ;
    else cout << "NO " << ktra(n) ;
}