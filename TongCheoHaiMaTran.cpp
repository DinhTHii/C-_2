#include<bits/stdc++.h>

using namespace std ;
long long mod = 1e9 +7 ;
int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    
    for(int i = 0 ; i < n ; i++)
    {
        int b[a[i]][a[i]] , w = 1 ;
        for(int j = 0 ; j < a[i] ; j++)
        {
            for(int k = 0 ; k < a[i] ; k++)
            {
                b[j][k] = w ;
                w++ ;
            }
        }
        unsigned int  Sum = 0 ;
        for(int j = 0 ; j < a[i] ; j++)
        {
            for(int k = 0 ; k < a[i] ; k++)
            {
                if( (j == k) || (j == (a[i] - 1 - k)) ) Sum += b[j][k] ;
            }
        }
        cout << Sum%mod << " " ;
    }
}