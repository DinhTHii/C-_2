#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n;
    cin >> n ;
    int A[n][n] ;
    if(n>0){
    for(int  i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> A[i][j] ;
        }
    }  
    int Q = 0 ;
    for(int  i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if( (i == j) || (i == n - j - 1) ){
                Q += A[i][j] ;
        }
    }     
    }
    
    cout << Q ;
    }
}