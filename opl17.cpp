#include <bits/stdc++.h>

using namespace std ;

int main(){
    long long a , b , k ;
    cin >> a >> b >> k ;
    k = ( k - a ) ;
    if( k >= 0 ){
        cout << "0" << " " ; 
        if ( (b - k) >= 0 ) cout << b-k ;
        else cout << "0" ;
    }
    
    else {
        cout << -k << " " << b ;
        return 0 ;
    }
    

}