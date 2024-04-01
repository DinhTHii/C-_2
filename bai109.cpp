#include<bits/stdc++.h>

using namespace std ;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string n ;
    cin >> n ;
    map <char,int> map ;
    for(int i = 0 ; i < n.size() ; i++ )
    {
        map[n[i]]++ ;
    }
    
    for(auto x : map )
    {
        if(x.second != 1 ) 
        {
            cout << "no" ;
            return 0 ; 
        }

    }
    cout << "yes" ;
}