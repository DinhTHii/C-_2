#include<bits/stdc++.h>

using namespace std ;

long long FF(int a , int b , int c , int n ){
    if( n == 0 ){
        return a ;
    }
    return c + (b*n) + FF( a , b , c , (n-1) ) ;
}

int main(){
    int a , b , c , n ;
    cin >> a >> b >> c >> n ;
    cout << FF( a , b , c , n )  ;
}