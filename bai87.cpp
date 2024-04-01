#include<bits/stdc++.h>
using namespace std ;
int main(){
    int m , n ;
    cin >> m >> n ;
    int a[m][n] ;
    int b[m][n] ;
    bool S = true ;
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
        for(int j = 0 ; j < n ; j++){
            if( a[i][j] != b[i][j] ){
               S = false ; break;
                 
            }
        }
    }
    if(S){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }

}