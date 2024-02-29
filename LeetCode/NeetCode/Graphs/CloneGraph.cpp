#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return node;

        unordered_map<Node*, Node*> realToCopy;

        queue<Node*> copyCreationQueue;

        copyCreationQueue.push(node);

        while (!copyCreationQueue.empty()) {
            Node* current = copyCreationQueue.front(); copyCreationQueue.pop();

            realToCopy[current] = new Node(current->val);

            for (auto neighbor : current->neighbors) {
                if (realToCopy.find(neighbor) != realToCopy.end()) continue;
                copyCreationQueue.push(neighbor);
            }
        }

        for (auto realAndClone : realToCopy) {
            Node* copy = realAndClone.second;

            for (auto realNeighbor : realAndClone.first->neighbors) {
                copy->neighbors.push_back(realToCopy[realNeighbor]);
            }
        }

        return realToCopy[node];
    }
};