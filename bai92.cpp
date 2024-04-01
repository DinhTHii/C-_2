#include <bits/stdc++.h>

using namespace std ;

int nguyento(long long A[] , int n ) {  
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); 
    for(int i = 0 ; i < n ; i++){
        cin >> A[i] ;
        long long S = 0 , D = 0 ;
        bool Q = true ;
        while(A[i] > 0 ){
            S = A[i]%10 ; 
            A[i] /= 10 ;
            D = D*10 + S ;
        }
        if(D == 0 || D == 1 ) cout << "No" << endl;
        else {
        for(int j = 2 ; j <= sqrt(D) ; j++){
            if(D%j==0){
                Q = false ; 
                   
            }
        }  
        if(Q == true ) {
            cout << "Yes" << endl ;
        } 
        else {
            cout << "No" << endl ; 
        }
    }
    }
    return n > 0 ;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n ; 
    cin >> n ;
    long long A[n] ;
    nguyento(A , n ) ;
}