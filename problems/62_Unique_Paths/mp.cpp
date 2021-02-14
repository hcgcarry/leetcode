class Solution {
public:
    int uniquePaths(int m, int n) {
        long long result =1;
        if(m <0 || n<0) return 0;
        for(int i=n;i < m+n-1;i++){
            // 這意不能寫成 result = result * (i/(i-n+1)) 因為(i/(i-n+1)) 會有餘數被cut 調
            result = result * i/(i-n+1);
        }
        return (int) result;
    }
};
