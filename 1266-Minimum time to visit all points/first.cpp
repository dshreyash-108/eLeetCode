class Solution {
public:

    int timeTaken(vector<int>& from, vector<int> to){
        int x = abs(from[0] - to[0]);
        int y = abs(from[1] - to[1]);

        return max(x, y);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        for(int i = 1; i < points.size(); i++){
            time += timeTaken(points[i-1], points[i]);
        }
        return time;
    }
    
};