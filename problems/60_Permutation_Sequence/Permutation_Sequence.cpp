class Solution {
public:
    string getPermutation(int n, int k) {
        string result="";
        for(int i=1;i<=n;i++){
            result += to_string(i);
        }
        for(int i=0;i<k-1;i++){
           next_permutation(result.begin(),result.end()); 
        }
        return result;
        
    }
};