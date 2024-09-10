class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
        int cX=0;
        int cO=0;
        for(auto it:board) {
            for(auto itt:it) {
                if(itt == 'X') cX++;
                else if(itt == 'O') cO++;
            }
        }
        if(cO>cX || abs(cX-cO) >1) return false;
        bool xWins = check(board,'X');
        bool oWins = check(board,'O');

        if(xWins && oWins) return false;
        if(xWins && cO>=cX) return false;
        if(oWins && cX>cO) return false;

        return true;
        
    }

private:
    bool check(vector<string>& b, char c) {
        for(int i=0;i<3;i++) {
            if(b[i][0]==c && b[i][1]==c && b[i][2]==c) return true;
        }
        for(int i=0;i<3;i++) {
            if(b[0][i]==c && b[1][i]==c && b[2][i]==c) return true;
        }
        if(b[0][0]==c && b[1][1]==c&&b[2][2]==c) return true;
        if(b[0][2]==c && b[1][1]==c&&b[2][0]==c) return true;

        return false;

    }    
};