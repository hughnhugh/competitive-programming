#include <queue>
using namespace std;

struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        return a.first * a.first + a.second * a.second > b.first * b.first + b.second * b.second;
    }
};

class Solution {
private:
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> closestPoints;
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        for (auto point : points) {
            closestPoints.push(make_pair(point[0], point[1]));
        }
        vector<vector<int>> closest(k);

        for (int i=0; i<k; i++) {
            pair<int, int> point = closestPoints.top(); closestPoints.pop();
            closest[i] = { point.first, point.second };
        }

        return closest;
    }
};