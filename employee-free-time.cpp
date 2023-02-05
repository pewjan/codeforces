#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> & schedule){
    map<int, int> m;
    vector<vector<int>> output;
    bool last = false;

    for(auto &v : schedule){
        for(auto &x : v){
            if(last){
                m[x]--;
            }else{
                m[x]++;
            }
            last = !last;
        }
    }
    for(auto &[key, value] : m){
        cout << key ": " << value << endl;
    }

}

int main(){
    vector<vector<int>> input1;
    vector<int> temp;
    temp.push_back(1);
    temp.push_back(2);
    temp.push_back(5);
    temp.push_back(6);
    input1.push_back(temp);
    temp.clear();
    temp.push_back(1);
    temp.push_back(3);
    input1.push_back(temp);
    temp.clear();
    temp.push_back(4);
    temp.push_back(10);
    input1.push_back(temp);
    temp.clear();
    cout << solve(input1) << endl;



}