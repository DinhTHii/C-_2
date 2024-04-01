#include<bits/stdc++.h>
using namespace std ;

const int mod = 998244353;

long long chia (long long a, long long b) 
{
    long long dem = 1;
    a %= mod;
    while (b > 0) 
    {
        if (b % 2 == 1) 
        {
            dem = (dem * a) % mod;
        }
        b = b / 2;
        a = (a * a) % mod;
    }

    return dem;
}
int main()
{
    int n ;
    cin >> n ;
    while( n-- )
    {
        long long a , b ; cin >> a >> b ;
        cout << chia(a , b ) << endl ;
    }
}