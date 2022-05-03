int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int a = 0;
    int b = 0;
    int c = 0;
    int answer = 1000000000; 
    while(a<(int)A.size() && b < (int)B.size() && c < (int)C.size()){
        int ans = min({A[a],B[b],C[c]}); 
        int ans2 = max({A[a],B[b],C[c]}); 
        answer = min(answer,ans2 - ans); 
        if(ans == A[a])
        a++;
        else if(ans == B[b])
        b++;
        else
        c++;
    }
    return answer;
}
