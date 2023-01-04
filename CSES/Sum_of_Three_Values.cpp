#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    vector<int> arr;
    unordered_map<int, unordered_set<int>> m;
    bool found = false;
    cin >> n >> x;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        m[temp].insert(i);
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0 ; i < arr.size(); i++){
        if(found){
            break;
        }
        int left = i+1;
        int right = arr.size() - 1;
        while (left < right){
            int total = (arr[i] + arr[left] + arr[right]);
            if ((total == x) && (i != left && i != right && left != right)){
                found= true;
                unordered_set<int> temp;
                for(auto &value: m[arr[i]]){
                    if(temp.find(value) == temp.end()){
                        temp.insert(value);
                        break;
                    }
                }
                for(auto &value: m[arr[left]]){
                    if(temp.find(value) == temp.end()){
                        temp.insert(value);
                        break;
                    }
                }
                for(auto &value: m[arr[right]]){
                    if(temp.find(value) == temp.end()){
                        temp.insert(value);
                        break;
                    }
                }
                for(auto itr = temp.begin(); itr != temp.end();++itr){
                    cout << *itr+1 << " ";
                    
                }
                found = true;
                break;
            }
            if (total > x){
                right -=1;
            }else{
                left +=1;
            }
            total = 0;
        }

    }
    if (!found){
        cout << "IMPOSSIBLE" << endl;
    }

}