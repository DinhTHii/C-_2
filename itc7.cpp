#include<bits/stdc++.h>
using namespace std ;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n ;
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        long long D = 0 ;
        long long a , b ;
        cin >> a ;
        cin >> b ;
        cout << b/4 - b/100 + b/400 - (a-1)/4 + (a-1)/100 - (a-1)/400 << endl ;
    }
}

