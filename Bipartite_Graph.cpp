class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> nodeColors(n, 0); 
        
        for (int i = 0; i < n; i++) {
            if (nodeColors[i] == 0 && !dfs(graph, i, 1, nodeColors)) {
                return false;  
            }
        }
        
        return true;  
    }
    
private:
    bool dfs(vector<vector<int>>& graph, int node, int color, vector<int>& nodeColors) {
        nodeColors[node] = color;  
        
        for (int neighbor : graph[node]) {
            if (nodeColors[neighbor] == color) {
                return false;  
            }
            
            if (nodeColors[neighbor] == 0 && !dfs(graph, neighbor, -color, nodeColors)) {
                return false;  
            }
        }
        
        return true;  
    }
};
