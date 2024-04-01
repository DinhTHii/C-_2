#include<bits/stdc++.h>
using namespace std ;
int main(){
    int m,n ;
    cin >> m >> n ;
    long long a[m][n] ;
    long long B[m] ;
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++){
            cin  >> a[i][j] ;
        }
    }
    for(int i = 0 ; i < m ; i++ ){
        B[i] = 0 ;
        for(int j = 0 ; j < n ; j++){
            B[i] += a[i][j] ;
        }
        cout << B[i] << " " ;
}
}