vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top=0;
        int down=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        int dir=0;
        while(top<=down && left<=right){
            if(dir==0){
                for(int col=left;col<=right;col++){
                    ans.push_back(matrix[top][col]);
                }
                top++;
            }
            else if(dir==1){
                for(int row=top;row<=down;row++){
                    ans.push_back(matrix[row][right]);
                }
                right--;
            }
            else if(dir==2){
                for(int col=right;col>=left;col--){
                    ans.push_back(matrix[down][col]);
                }
                down--;
            }
            else if(dir==3){
                for(int row=down;row>=top;row--){
                    ans.push_back(matrix[row][left]);
                }
                left++;
            }
            dir+=1;
            dir%=4;
        }
       return ans; 
    }
