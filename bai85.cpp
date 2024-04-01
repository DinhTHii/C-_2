#include<bits/stdc++.h>
using namespace std ;
int main(){
    int m , n , p ;
    cin >> m >> n >> p ;
    int a[m][n] ;
    int b[n][p] ;
    
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++){
            cin  >> a[i][j] ;
        }
    }
    for(int j = 0 ; j < n ; j++){
        for(int k = 0 ; k < p ; k++){
            cin  >> b[j][k] ;
        }
    }
    for(int i = 0 ; i < m ; i++ ){
        for(int k = 0 ; k < p ; k++){ 
            int S = 0 , A = 0 ;
            for(int j = 0 ; j < n ; j++){
                S = a[i][j] * b[j][k] ; 
                A += S ;
            }
        cout << A << " " ;                
        }
        cout << endl ;
    }
}