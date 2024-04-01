#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n ,m ;
    cin >> n >> m ;
    int a[n][m] ;
    int min[n] , max[m] ;
    bool b = true ;
    for(int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            cin >> a[i][j] ;
        }
    }
    for(int i=0 ; i<n ; i++){
            min[i] = a[i][0] ;
    }
    for( int j=0 ; j<m ; j++){
            max[j] = a[0][j] ;
    }

    
    for(int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            if( min[i] > a[i][j] ){
            min[i] = a[i][j] ;
            }
            if(max[j] < a[i][j]){
                max[j] = a[i][j] ;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
            for( int j=0 ; j<m ; j++){
                if(min[i] == a[i][j] && max[j] == a[i][j]){
                    b = false ;
                }
            }
    }
    if(b){ 
        cout << "Khong co phan tu yen ngua" ;
    }
    else {
    cout << "Cac phan tu yen ngua la:" << endl ;
        for(int i=0 ; i<n ; i++){
            for( int j=0 ; j<m ; j++){
                if(min[i] == a[i][j] && max[j] == a[i][j]){
                    cout << "(" << i+1 << "," << j+1 << ");" << " " ;
                }
        }
    }
    }
    

}
    