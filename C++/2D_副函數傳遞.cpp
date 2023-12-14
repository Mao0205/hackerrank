//二維的傳遞只需要在副函式的參數中加上“＆”，即使是遞迴也可以直接使用。

void output_tree(vector<vector<int>> &indexes,int root, vector<int>&ans){
    
    if(root < 0)
        return;
    output_tree(indexes,indexes[root][0]-1,ans);
    ans.push_back(root+1);
    cout<<root+1<<" ";
    output_tree(indexes,indexes[root][1]-1,ans);   
}
int main(){
    vector<vector<int>> indexes;
    vector<int>tmp;
    output_tree(indexes,0,tmp);
}
