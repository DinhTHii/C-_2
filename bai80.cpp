#include<bits/stdc++.h>
using namespace std ;
int main (){
    int m,n;
    cin >> m >> n ;
    int A[m][n] ;
    int B[m] ;
    for(int  i = 0 ; i < m ; i++)
        for(int j = 0 ; j < n ; j++){
            cin >> A[i][j] ;
        }

    for(int  j = 0 ; j < n ; j++){
        B[j] = 0 ;
        for(int i = 0 ; i < m ; i++){
            B[j] += A[i][j] ;
            
        }
        cout << B[j] << " " ;
    }    
}