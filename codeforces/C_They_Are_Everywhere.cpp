#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    string str;
    cin >> n;
    cin >> str;
    unordered_set<char> s;
    unordered_map<char, int> m;
    int k = 0;
    for(int i = 0; i < n; ++i){
        if(s.find(str[i]) == s.end()){
            k++;
            s.insert(str[i]);
        }
    }

    int left = 0;
    int count = 0;
    int length = INT_MAX;
    for(int right = 0; right < n; ++right){
        if(m[str[right]] == 0){
            count++;
        }
        m[str[right]]++;
        while(count == k){ 
            length = min(length, right - left + 1);
            if (m[str[left]] == 1){
                m.erase(str[left]);
                count--;
            }else{
                m[str[left]]--;
            }
            left++;
            
        }

    }
    cout << length << endl;

    

}