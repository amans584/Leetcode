class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dis(n, vector<int>(m,1e9));
        dis[0][0] = grid[0][0];
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        deque<pair<int,int>> dq;
        dq.push_front(make_pair(0,0));
        while(!dq.empty()) {
            auto node = dq.front();
            dq.pop_front();
            for(int i=0;i<4;i++) {
                int newX = node.first + dx[i];
                int newY = node.second + dy[i];
                if(isValid(newX, newY, n,m)) {
                    int newCost = dis[node.first][node.second] + grid[newX][newY];

                    if (newCost < dis[newX][newY]) {
                        dis[newX][newY] = newCost;

                        if (grid[newX][newY] == 0) {
                            dq.push_front({newX, newY});
                        } else {
                            dq.push_back({newX, newY});
                        }
                    }
   
                }
            
            }
        }
        if(dis[n-1][m-1] < health) return true;
        else return false;


    }
private:
    bool isValid(int x, int y, int n, int m) {
        if((x<n && x>=0) && (y<m &&y>=0)) return true;
        else return false;
    }      
};