#include <bits/stdc++.h>

using namespace std;

int main() {
      long long n,a,b=0;
    cin >> n ;
    for (long long i=n ; i!=0 ; i/=10){
    a = i%10 ;
    b = b*10 + a ;
    }
    if (n==b){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}