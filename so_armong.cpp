#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;

    while(n > 0){
        int j = i, m = i;
        long count = 0;
        while(j > 0){
            count++;
            j /= 10 ;
        }

        int t = 0, s = 0;
        while(m > 0){
            t=m%10;
            s += pow(t, count);
            m/=10;
        }
        
        if(i == s){
            cout << i << " ";
            n--;
        }
        i++;
    }
}