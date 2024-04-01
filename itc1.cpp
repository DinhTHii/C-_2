#include<bits/stdc++.h>

using namespace std ;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n ;
    cin >> n ;
    int A[n][7] ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 7 ; j++)
        {
            cin >> A[i][j] ;
        } 
    }
    for(int i = 0 ; i < n ; i++)
    {
        sort ( A[i] , A[i] + 7 ) ;
        cout << A[i][0] << " " << A[i][1] << " " << A[i][6] - A[i][0] - A[i][1] << endl ;
    }
    
    
    
    
}