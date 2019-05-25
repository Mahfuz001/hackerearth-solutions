#include<bits/stdc++.h>
using namespace std;
 
bool is_it_prime(int n){
    if(n < 2) return false;
    if(n <=3 ) return true;
    
    if(n % 2 == 0 || n % 3 == 0) 
        return false;
    
    for(int i=5; i*i <= n; i+=6){
        if(n % i == 0 || n %(i+2)== 0){
            return false;
        }
    }
    
    return true;
}
int main(){
    int n; cin >> n;
    
    if(n >= 2){
        cout << 2;
    }
    
    for(int i=3; i<=n; i++){
        if(is_it_prime(i))
            cout << " " << i;
    }
    
    cout << "\n";
    return 0;
}
