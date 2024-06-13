#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n,i,num;
    cout << "enter n:";
    cin>>n;
    cout<<"enter values:";
    for(i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for(i=0;i<n;++i){
        cout<<v[i]<<" ";
    }
	return 0;
}