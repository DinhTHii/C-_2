#include <bits/stdc++.h>

using namespace std;

int main() 
{
        int n;
        cin >> n;

        long long x;
        cin >> x;

        int a[n] ;
        set<int>st ;
        unsigned int tong = 0 ;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            st.insert( a[i] ) ;
        }
        int dem = 0;
        
        for ( int i = 0 ; i < n ; i++ )
        {
            auto s = st.find( x - a[i] ) ;
            if( s != st.end() ) 
            {
                dem++ ;
            }
        }

        cout << dem/2 ;
}
