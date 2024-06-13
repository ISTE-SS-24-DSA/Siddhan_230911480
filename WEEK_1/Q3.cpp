#include <bits/stdc++.h>
using namespace std;

int CheckPrime(int n){
    int flag=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=0;
        }
    }
    return flag;
}

int main(){
    int n;
    cout<< "enter n:";
    cin >> n;
    cout << CheckPrime(n);
}