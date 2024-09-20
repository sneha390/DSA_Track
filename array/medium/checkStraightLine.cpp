class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() <= 2) {
           return true;
       }
       int x1, x2, y1, y2;
       x1 = coordinates[0][0];
       y1 = coordinates[0][1];
       x2 = coordinates[1][0];
       y2 = coordinates[1][1];
       for (int i = 2; i < coordinates.size(); i++) {
           int x = coordinates[i][0];
           int y = coordinates[i][1];
           if ((x - x1) * (y2 - y1) != (y - y1) * (x2 - x1)) {
               return false;
           }
       }
       return true;
    }
};
