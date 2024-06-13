#include <bits/stdc++.h>
using namespace std;

int Reverse(int n){
    int rev=0;
    while(n>0){
        int place = n%10;
        rev = rev*10 + place;
        n/=10;
    }
    return rev;
}

int main(){
    int n;
    cout<< "enter n:";
    cin >> n;
    cout << Reverse(n);
}