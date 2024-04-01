#include <bits/stdc++.h>

using namespace std ;
int Q = 0 ;
long long armstrong(int A[] , int n ) {   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); 
    for(int i = 0 ; i < n ; i++){
        cin >> A[i] ;
        int M = 0 ;
        int S = 0 ;
        int D = 0 ;
        int  F = A[i] , K = A[i] ;
        while(K > 0 ){
            K /= 10 ;
            S++ ;
        }
    for(int j = 0 ; j < 1 ; j++){
        while(F > 0 ){
            D = F%10 ;
            F /= 10 ;
            M += pow(D,S) ;
        }
        if(M == A[i] ){
            Q++ ;
        }
    }
    cout << Q ;
    }
    for(int i = 0 ; i < n ; i++ ){
        cout << A[i] << " " ; 
    }
    return n > 0 ;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n ;
    cin >> n ;
    int A[n] ;
    armstrong(A, n ) ;
}


