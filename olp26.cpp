/*#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    double n ; long long  m ; cin >> n >> m ;
    long long nn = ceil(n) - 1 ; 
    int chia = 1e9 +7 ;
    cout << ((m*(2*m+1)*(m+1))/6 - (nn*(2*nn+1)*(nn+1))/6) % mac ;
}   */
#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    double n ; long long  m ; cin >> n >> m ;
    long long nn = ceil(n) - 1 ; 
    int chia = 1e9 +7 ;
    unsigned int tong = (((m*(2*m+1)*(m+1))/6)%chia - (nn*(2*nn+1)*(nn+1))/6)%chia ;
    cout << tong%chia ;
}