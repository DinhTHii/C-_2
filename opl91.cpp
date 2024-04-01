#include <bits/stdc++.h>

using namespace std ;

int main(){
    long long A , B , C ;
    cin >> A >> B >> C ;
    if( C % 2 != 0 ){
        if ( A > B ){
            cout << ">" ;
        }
        else if ( A < B ){
            cout << "<" ;
        }
        else cout << "=" ;
    }
    else {
        if ( abs(A) > abs(B) ){
            cout << ">" ;
        }
        else if ( abs(A) < abs(B) ){
            cout << "<" ;
        }
        else cout << "=" ;
    }
}