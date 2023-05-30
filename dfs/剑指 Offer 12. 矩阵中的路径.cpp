//
// Created by DerbySoftI88 on 2023/5/25.
//
#include <utility>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    const vector<pair<int,int>> movement={{1,0},{-1,0},{0,1},{0,-1}};

    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<string>> visited(board.size(),vector<string>(board[0].size(),"unvisited"));
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j]==word[0]){
                    visited[i][j]="visited";
                    if (this->dfs(board,word,visited,1,i,j)){
                        return true;
                    }
                    visited[i][j]="unvisited";
                }
            }
        }
        return false;

    }

    bool dfs(vector<vector<char> >& board, string word, vector<vector<string> >& visited,
             int word_idx,int cur_row,int cur_col
             ){
        if (word_idx>=word.size()){
            return true;
        }
        for (const auto& p: this->movement){
            int x=cur_row+p.first;
            int y=cur_col+p.second;
            if (x<0 || x>=board.size()||y<0||y>=board[0].size()) {
                continue;
            }
            if (visited[x][y]=="visited"){
                continue;
            }
            if (word[word_idx]==board[x][y]){
                visited[x][y]="visited";
                if (dfs(board,word,visited,word_idx+1,x,y)){
                    visited[x][y]="unvisited";
                    return true;
                }
                visited[x][y]="unvisited";
            }
        }
        return false;
    }

};

int main(){
    Solution s=Solution();
    vector<vector<char>> board({{'a','a'}});
    auto ans=s.exist(board,"aaa");
    cout<<ans;
}
