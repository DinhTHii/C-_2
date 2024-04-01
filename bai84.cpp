#include<bits/stdc++.h>
using namespace std ;
int main(){
    int m,n ;
    cin >> m >> n ;
    int a[m][n] ;
    
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++){
            cin  >> a[i][j] ;
        }
    }
    for(int i = 0 ; i < m ; i++ ){
        int max = 0 ;
        for(int j = 0 ; j < n ; j++){
            if( a[i][j] > max ){
                max = a[i][j] ;
            }
        }
        cout << max << " " ;
    }
    cout << endl ;
    for(int j = 0 ; j < n ; j++ ){
        int max = 0 ;
        for(int i = 0 ; i < m ; i++){
            if( a[i][j] > max ){
                max = a[i][j] ;
            }
        }
        cout << max << " " ;
    }
}