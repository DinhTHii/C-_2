#include<bits/stdc++.h>
using namespace std ;
int main(){
    int m , n ;
    cin >> m >> n ;
    int a[m][n] ;
    int b[m][n] ;
    
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++){
            cin  >> a[i][j] ;
        }
    }
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++){
            cin  >> b[i][j] ;
        }
    }
    for(int i = 0 ; i < m ; i++ ){
        int A = 0 ; 
        for(int j = 0 ; j < n ; j++){
            A = a[i][j] + b[i][j] ;
            cout << A << " " ;
        }
        cout << endl ;
    }

}