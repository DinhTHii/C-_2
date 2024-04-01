#include <bits/stdc++.h>
using namespace std ;
int main (){
    string n ;
    cin >> n ;
    int D = n.size() - 1 ;
    unsigned long long  S = 0 ;
    for( int i = 0 ; i < n.length() ; i++){
        if( n[i] == '1' ){
            S += pow( 2 , D ) ;
        }
        D-- ;
    }
    cout << S << " ";
}           