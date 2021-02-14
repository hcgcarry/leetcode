//iteration
class Solution {
     
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        string num2alpha[10] = {"" ,"" ,"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        if(digits.empty())return result; 
        result.push_back("");
        for(int i=0;i<digits.size();i++){
            //important
            int num = digits[i] - '0';
           if(num <2 || num > 9)break;
            vector<string>tmp;
            for(int j=0;j<num2alpha[num].size();j++){
                for(int k=0;k<result.size();k++){
                    tmp.push_back(result[k]+num2alpha[num][j]);
                }
            }
            result.swap(tmp);
                
            
        }
        return result;
    }
    
};