#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return head;

        unordered_map<Node*, Node*> originalToCopy;

        Node* node = head;

        while (node) {
            originalToCopy[node] = new Node(node->val);
            node = node->next;
        }

        node = head;

        while (node) {
            originalToCopy[node]->next = originalToCopy[node->next];
            originalToCopy[node]->random = originalToCopy[node->random];
            node = node->next;
        }

        return originalToCopy[head];
    }
};