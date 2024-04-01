#include<bits/stdc++.h>

using namespace std ;

long long DeNhat( int n ){
    if(n >=101) return n - 10 ;
    else return DeNhat( DeNhat( n + 11 ) ) ;
}

int main (){
    int n ; 
    cin >> n ;
    cout << DeNhat( n ) ;

}