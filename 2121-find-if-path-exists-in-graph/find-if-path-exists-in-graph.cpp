class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> graph;
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        vector<int> distances(n, numeric_limits<int>::max());
        distances[source] = 0;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> priorityQueue;
        priorityQueue.push({0, source});
        
        while (!priorityQueue.empty()) {
            auto current = priorityQueue.top();
            priorityQueue.pop();
            int currentDistance = current.first;
            int currentNode = current.second;
            
            if (currentNode == destination) {
                return true;
            }
            
            if (currentDistance > distances[currentNode]) {
                continue;
            }
            
            for (int neighbor : graph[currentNode]) {
                int distance = currentDistance + 1; // Assuming unweighted graph
                if (distance < distances[neighbor]) {
                    distances[neighbor] = distance;
                    priorityQueue.push({distance, neighbor});
                }
            }
        }
        
        return false;
    }
};