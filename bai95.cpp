    #include<bits/stdc++.h>

    using namespace std ;

    void traisangphai(long long A[] , long long B[] , int n , int k ){

        for(int  i = 0  ; i < k ; i++){
            long long D = A[ n - 1 ] ;
            for (int j = n - 1 ; j >= 0 ; j--){
                A[j] = A[ j - 1 ] ;
            }
            A[0] = D ;
        }
        for(int i = k - 1  ; i >= 0 ; i--){
            long long D = B[0] ;
            for(int j = 0 ; j < n ; j++){
                B[j] = B[ j + 1 ] ;
            }
            B[ n - 1 ] = D ;
        }
        for(int i = 0 ; i < n ; i++){
            cout << A[i] + B[i] << " " ;
        }
    }
    int main (){
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int n , k ;
        cin >> n >> k ;
        long long A[n] , B[n] ;
        for(int i = 0 ; i < n ; i++){
            cin >> A[i] ;
        }
        for(int i = 0 ; i < n ; i++){
            cin >> B[i] ;
        }

        traisangphai(A , B , n , k ) ;
    }