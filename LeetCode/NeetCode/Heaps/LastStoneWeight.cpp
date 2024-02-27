#include <queue>

using namespace std;

class Solution {
private:
    priority_queue<int> stonesHeap;
public:
    int lastStoneWeight(vector<int>& stones) {
        for (int stone : stones) {
            stonesHeap.push(stone);
        }

        while (stonesHeap.size() > 1) {
            int firstStone = stonesHeap.top(); stonesHeap.pop();
            int secondStone = stonesHeap.top(); stonesHeap.pop();

            if (firstStone == secondStone) continue;
            else stonesHeap.push(firstStone-secondStone);
        }

        if (stonesHeap.empty()) return 0;
        return stonesHeap.top();
    }
};