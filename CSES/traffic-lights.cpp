#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
// #include "../rin.h"


int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll x, n;
    cin >> x >> n;
    multiset<ll> m;
    vector<ll> output;
    set<ll> s;
    s.insert(0);
    s.insert(x);
    m.insert(x);
    while(n--){
        ll temp;
        cin >> temp;
        auto itr = s.upper_bound(temp);
        auto itr2 = prev(itr);
        m.erase(m.find(*itr-*itr2));
        m.insert(temp-*itr2);
        m.insert(*itr-temp);
        s.insert(temp);
        output.push_back(*m.rbegin());
               
    }
    for(auto &x: output){
        cout << x << " ";
    }
    cout << endl;

}