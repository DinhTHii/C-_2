#include<bits/stdc++.h>

using namespace std ;

long long DeNhat( int m , int n ){
    if( m== 0 || m == n ) return 1 ;
    else return (DeNhat( m - 1  , n - 1 ) + DeNhat( m , n - 1 )) ;
}

int main (){
    int m , n ;
    cin >> m >> n ;
    cout << DeNhat( n , m ) ;
}