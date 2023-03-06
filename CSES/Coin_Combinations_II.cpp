int memo[101][1000000];
ll dp(int i, int total, int prev, int & target, vector<int> & arr){
 
 
    if(total == target){
        return 1;
    }
 
    if(i >= arr.size()){
        return 0;
    }
 
    if(memo[i][total] != -1){
        return memo[i][total];
    }
    if(total > target){
        return 0;
    }
    int count = dp(i+1, total, prev, target,arr);
    if(arr[i] >= prev and total + arr[i] >= 0){
        count+=dp(i, total+arr[i], arr[i], target, arr);
    }
    memo[i][total] = count;
    return count;
        
}