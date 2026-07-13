class Solution {
private:
    void dfs(int node, vector<vector<int>>& isConnected, vector<int> &vis) {
        vis[node] = 1; 
        // Iterate through all possible nodes 'it' from 0 to V-1
        for(int it = 0; it < isConnected.size(); it++) {
            // Check if 'it' is a neighbor and has not been visited
            if(isConnected[node][it] == 1 && !vis[it]) {
                dfs(it, isConnected, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int> vis(v, 0); // Visited array

        int cnt = 0;
        for(int i = 0; i < v; i++) {
            if(vis[i] == 0) {
                cnt++;
                dfs(i, isConnected, vis);
            }
        }
        return cnt;
    }
};
