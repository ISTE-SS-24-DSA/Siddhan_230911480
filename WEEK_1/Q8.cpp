#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    //v={1,2,3,4,5};
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(auto it=v.begin();it<v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    for(auto it=v.rbegin();it<v.rend();it++)
    cout<<*it<<" ";
	return 0;
}