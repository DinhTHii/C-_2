#include<bits/stdc++.h>

using namespace std ;

int main(){
    int T ;
    cin >> T ;
    for(int i = 0 ; i < T ; i++){
        int n ; 
        cin >> n ;
        int A[n] , B[n] ;
        bool F = true ;
        for(int j = 0 ; j < n ; j++){
            cin >> A[j] ;
        }
        sort( A , A + n ) ;
        for(int j = 0 ; j < n ; j++){
            cin >> B[j] ;
        }
        sort( B , B + n ) ;
        for( int j = 0 ; j < n ; j++){
            if(A[j] > B[j] ){
                F = false ;
                break;
            }
        }
        if( F ){
                cout << "Yes" << endl ;
            }
            else {
                cout << "No" << endl ;
            }
    }
}