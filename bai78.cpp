#include<bits/stdc++.h> 
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int a[n] ;
    bool e = false ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
    int s = 0 ;
    while(!e){
    for(int i=0 ; i<n ; i++){
        if(a[i]%2!=0){
            e = true ;
            break;
        }
    }
    if(!e){ s++ ;
       for(int i=0 ; i<n ; i++){
        a[i] /= 2 ;
    }
    }
    }
    cout << s ;
}










#include<bits/stdc++.h> 
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int a[n] ;
    int min = pow(10,9) ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
    
    for(int i=0 ; i<n ; i++){
      int s = 0 ;
      while(a[i]%2==0){
        s++;
        a[i]/=2 ;
      }
      if( min > s ) min = s ;

    }
  cout << min ;
}

