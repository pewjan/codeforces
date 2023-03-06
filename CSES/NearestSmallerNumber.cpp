#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int


int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
    }

    stack<pair<int,int>> s;
    for(int i = 0; i < n;i++){

        int pos = -1;
        while(s.size() && s.top().first >= arr[i]){
            s.pop();
        }
        
        if(s.size()){
            pos = s.top().second;
        }else{
            pos = 0;
        }

        s.push({arr[i], i+1});
        cout << pos << " ";
    }


}