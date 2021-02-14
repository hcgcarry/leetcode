class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if(matrix.empty())return result;
        int aboveRow = 0,belowRow = matrix.size() -1,leftCol = 0,rightCol = matrix[0].size() -1;
        
        recur(matrix,result,aboveRow,belowRow,leftCol,rightCol);
        return result;
    }
    void recur(vector<vector<int>>& matrix,vector<int>& result,int aboveRow,int belowRow,int leftCol,int rightCol){
        cout << "aboveRow " << aboveRow << " b " << belowRow << " l " << leftCol << " r " << rightCol << endl;
        if(aboveRow > belowRow || leftCol > rightCol)return ;
        for(int i=leftCol;i<=rightCol;i++){
            result.push_back(matrix[aboveRow][i]);
            //cout << "first " << result.back();
        }
        cout << endl;
        for(int i=aboveRow +1;i<=belowRow;i++){
            result.push_back(matrix[i][rightCol]);
            //cout << "second " << result.back();
        }
        //cout << endl;
        
        //這邊要注意 因為如果只剩一維的vector 這邊不能再重複選取
        if(belowRow != aboveRow){
           for(int i = rightCol -1 ;i >=leftCol;i--){
        
            result.push_back(matrix[belowRow][i]);
            //cout << "third " << result.back();
        } 
        }
        
        cout << endl;
        

        //這邊要注意 因為如果只剩一維的vector 這邊不能再重複選取
            if(rightCol != leftCol){
          for(int i=belowRow -1 ;i>= aboveRow +1;i--){
            result.push_back(matrix[i][leftCol]);
            //cout << "forth " << result.back();
         }  
        }
        
        cout << endl;
        for(int i=0;i<result.size();i++){
            //cout << " " << result[i];
        }
        cout << endl;
        recur(matrix,result,aboveRow +1 ,belowRow-1,leftCol+1,rightCol-1);
    }
};