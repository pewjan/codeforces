#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long
// #include "../rin.h"

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int x, n;
    cin >> x >> n;
    ll total = 0;
    multiset<int> arr;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.insert(a);
    }

    while(arr.size() != 1){
        auto itr = arr.begin();
        int a = *(itr);
        int b = *(next(itr));
        arr.erase(next(itr));
        arr.erase(itr);
        total+= a+b;
        arr.insert((a+b));
    }
    cout << total << endl;

}