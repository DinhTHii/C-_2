#include<bits/stdc++.h>

using namespace std ;

int main (){
    int n ;
    cin >> n ;
    int A[n][5] ; 
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < 5 ; j++ ){
            cin >> A[i][j] ; 
    }
}
for(int i = 0 ; i < n ; i++ ){
        int  S = A[i][0] ;
        int D = 0 , F = 0 ;  
        for(int j = 0 ; j < 5 ; j++ ){
            if( A[i][j] == S ){
                D++ ;
            }
            else F += A[i][j] ; 
        }
        if( D == 4 || D == 5 ) cout << "Yes" << endl ;
        else if( D == 3 || D == 1 ){
            if( F == S ) cout << "Yes" << endl ;
            else cout << "No" << endl ;    
        }
        else cout << "No" << endl ;
}
}