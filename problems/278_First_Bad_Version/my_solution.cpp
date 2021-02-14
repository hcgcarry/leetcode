// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //注意left從0開始，因為如果只給兩個 1 2 而1壞掉,下面這個while會直接跳過沒辦法更新right
        
        int left=0,right=n;
        while(right - left > 1){
            int mid = left + (right - left)/2;
            bool check = isBadVersion(mid);
            if(check == false){
                left = mid;
            }
            else if(check == true){
                right =mid;
            }
        }
        return right;
    }
};