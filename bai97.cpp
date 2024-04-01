#include<bits/stdc++.h>

using namespace std ;

long long tong(int n ){
    if( n == 0 ){
        return 0 ;
    }
    return n + tong( n - 1 ) ;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n ;
    cin >> n ;
    
    cout << tong( n )  ;
}