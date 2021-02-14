class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string localResult="";
        recur(result,localResult,n,0);
        return result;
    }
    void recur(vector<string> &result,string localResult,int leftPareCount,int rightPareCount){
        if(leftPareCount ==0 && rightPareCount==0){
            result.push_back(localResult);
            return;
        }
        else{
            if(leftPareCount >0){
                //這樣寫 這邊會出問題 
                localResult += "(";
                recur(result,localResult,leftPareCount-1,rightPareCount+1);
            }
             if(rightPareCount >0){
                 //這個localResult 會出問題 因為上面的如果有加過 這邊會留著上面的
                localResult += ")";
                recur(result,localResult,leftPareCount,rightPareCount-1);
            }
        }
    }
};