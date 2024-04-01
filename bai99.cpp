#include<bits/stdc++.h>

using namespace std ;

long long DeNhat(int m , int n ){
    if( m == 0 ){
        return n + 1 ;
    }
    else if( m > 0 && n == 0 ){
        return DeNhat( m - 1 , 1 ) ;
    }
    return DeNhat( m - 1 , DeNhat( m , n - 1 )) ;
} 

int main (){
    int  m , n ;
    cin >> m >> n ;
    cout << DeNhat( m , n ) ;
}