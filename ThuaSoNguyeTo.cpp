#include <bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long n ;
    cin >> n ;
    int a = 0 , s = 0 , d = 0 , f = 0 , g = 0 , h = 0 ;
    bool q = true , w = true , e = true ;
    if( n % 2 == 0) q = false ;
    if( n % 3 == 0) w = false ;
    if( n % 5 == 0) e = false ;
    while( n%2 == 0 ) 
    {
        n /= 2 ;
        a++ ;
        f = 1 ;
    }
    while( n%3 == 0 )
    {
        n /= 3 ;
        s++ ;
        g = 1 ;
    } 
    while( n%5 == 0 )
    {
        n /= 5 ;
        d++ ;
        h = 1 ;
    }
    cout << f+g+h << endl ;
    if( !q ) cout << "2" << " " << a << endl ;
    if( !w ) cout << "3" << " " << s << endl ;
    if( !e ) cout << "5" << " " << d << endl ;
}