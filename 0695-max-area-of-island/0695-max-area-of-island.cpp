struct hash_pair {
    template <class T1, class T2>
    size_t operator() (const pair<T1, T2>& p) const {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;  // XOR the two hash values to combine them
    }
};

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        
        unordered_map<pair<int, int>, int, hash_pair> mp;

        // Storing all land cells (where grid[i][j] == 1) in the map
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 1) {
                    mp[{i, j}] = 1; 
                }
            }
        }

        int maxi = 0;  // Initialize the maximum area to 0 (no island found yet)
        vector<vector<int>> arr(r, vector<int>(c, 0));  // Corrected: arr with r rows and c columns

        // Iterate through the grid to perform BFS for each island
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if ((mp.find({i, j}) != mp.end()) && arr[i][j] == 0) {  // Start BFS if unvisited land
                    int ct = 1;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    arr[i][j] = 1;

                    while (!q.empty()) {
                        pair<int, int> p = q.front();
                        q.pop();
                        int x = p.first;
                        int y = p.second;

                        // Check all four directions and add unvisited land to the queue
                        if (x + 1 < r && mp.find({x + 1, y}) != mp.end() && arr[x + 1][y] == 0) {
                            arr[x + 1][y] = 1;
                            q.push({x + 1, y});
                            ct++;
                        }
                        if (y + 1 < c && mp.find({x, y + 1}) != mp.end() && arr[x][y + 1] == 0) {
                            arr[x][y + 1] = 1;
                            q.push({x, y + 1});
                            ct++;
                        }
                        if (x - 1 >= 0 && mp.find({x - 1, y}) != mp.end() && arr[x - 1][y] == 0) {
                            arr[x - 1][y] = 1;
                            q.push({x - 1, y});
                            ct++;
                        }
                        if (y - 1 >= 0 && mp.find({x, y - 1}) != mp.end() && arr[x][y - 1] == 0) {
                            arr[x][y - 1] = 1;
                            q.push({x, y - 1});
                            ct++;
                        }
                    }
                    maxi = max(ct, maxi);  // Update the maximum area
                }
            }
        }
        return maxi;
    }
};