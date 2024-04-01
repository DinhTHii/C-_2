#include<bits/stdc++.h>
using namespace std ;
int main(){
    int m , n ;
    cin >> m >> n ;
    int a[m][n] ;
    int b[m][n] ;
    int T = 0 ;
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++){
            cin  >> a[i][j] ;
        }
    }
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++){
            if( a[i][j] == 0 ){
                T++ ;
            }
        }
    }
    cout << (T>=(m*n)/2.0 ? "Yes" : "No" ) ;
}