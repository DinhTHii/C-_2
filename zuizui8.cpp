#include<bits/stdc++.h>

using namespace std ;

long long doi( long long n )
{
    long long sum = 0 ;
    while( n!=0 )
    {
        sum = sum*10 + n%10 ;
        n /= 10 ;
    }
    return sum ;
}
bool nguyento( long long n )
{
    if( n<2 ) return false ;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if( n%i == 0 ) return false ;
    }
    return true ;
}
int main() 
{
    int n ; cin >> n ;
    while( n-- )
    {
        long long m ; cin >> m ;
        if( nguyento(doi(m)) ) cout << "Yes\n" ;
        else cout << "No\n"  ;
    }
}