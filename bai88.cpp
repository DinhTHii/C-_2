#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int a[n][n] ;
    bool S = true ;
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++){
            cin  >> a[i][j] ;
        }
    }
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++){
                if( i != j && a[i][j] == 1 ){
                   S = false ;
                   break;
                }
                // if(i == j && a[i][j] == 0){
                //     S = false ;
                //     break;
                // }
        }
    }
    if(S == true){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }   
    return 0 ;
}