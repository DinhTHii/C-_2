#include<bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string n ; 
    cin >> n ;
    int dem = 0 , sum = 0 ;
    for(int i = 0 ; i < n.size() ; i++)
    {
        if(n[i] == 'A')
        {
            dem = i ; 
            break ;
        }
    }

    for(int i = n.size()-1 ; i >= 0 ; i--)
    {
        if(n[i] == 'Z')
        {
            sum = i ; 
            break ;
        }
    }
    int d = sum - dem +1 ;
    cout << d ;
}