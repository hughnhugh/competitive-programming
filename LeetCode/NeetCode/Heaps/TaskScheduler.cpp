#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> taskMap;
        int maxTask = 0;
        int totalTask = tasks.size();

        for (int i=0; i<tasks.size(); i++) {
            maxTask = max(maxTask, ++taskMap[tasks[i]]);
        }

        int maxTaskCount = 0;

        for (auto task : taskMap) {
            if (task.second == maxTask) maxTaskCount++;
        }

        return max(maxTask * (n+1) - n + maxTaskCount-1, totalTask);
    }
};