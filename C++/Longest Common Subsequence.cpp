/*
題目說明：找出兩個字串最長相同字元的長度。
方法：二維向量用ＤＰ做更新

以“aecde"和“ace"為例子，二維向量會紀錄”s1中第i個以前“與”s2中第j個以前“的LCS，向量如下所示，則mat[s1.size()][s2.size()]為最終解。

    ""  a   c   e
""  0   0   0   0
a   0   1   1   1
e   0   1   1   2
c   0   1   2   2
d   0   1   2   2
e   0   1   2   3


*/

int main(){
    string s1 = "aecde";
    string s2 = "ace";
    vector<vector<int>> mat(s1.size()+1, vector<int>(s2.size()+1,0));
    
    int i, j;
    for(i=1;i<=s1.size();i++){
        for (j=1; j<=s2.size(); j++) {
            if(s1[i-1]==s2[j-1]){
                mat[i][j] = mat[i-1][j-1]+1;
            }
            else {
                mat[i][j] = max(mat[i][j-1],mat[i-1][j]);
            }            
        }
    }
    cout<<mat[s1.size()][s2.size()]<<endl;

}
