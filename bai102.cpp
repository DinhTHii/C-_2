#include<bits/stdc++.h>

using namespace std ;

int main(){
    string n ;
    
    while( cin >> n ){
        int hoa = 0 , thuong = 0 ;
        for( char s : n ){
            if( isupper(s)) hoa++ ;
            else if(islower(s))thuong++ ;
        }
        if( thuong >= hoa ) {
            for (char &c : n ) {
            c = tolower(c);
            cout << c ;
    }
        }
        else {  
            for (char &c : n ) {
            c = toupper(c);
            cout << c ;
        }
        }
        cout << endl ;
    }
}