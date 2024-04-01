#include<bits/stdc++.h>

using namespace std ;

/*int main(){
    int n ;
    cin >> n ;
    map <int,bool> map ;
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        for(int j = 0 ; j < x ; j++){
            int s ; cin >> s ;
            map[s] = true ;
        }
        cout << map.size() << endl ;
    }
    
}*/

int main(){
    int n ;
    cin >> n ;
    set <int> set ;
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        for(int j = 0 ; j < x ; j++){
            int s ; cin >> s ;
            set.insert(s) ;
        }
        cout << set.size() << endl ;
    }
    
}