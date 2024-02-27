#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    unordered_map<char, unique_ptr<TrieNode>> nextNodes;
    bool isEndOfWord = false; // Flag to indicate the end of a word

    TrieNode() = default;
};

class Trie {
public:
    unique_ptr<TrieNode> root;

    Trie() : root(make_unique<TrieNode>()) {} // Initialize root in the constructor
    
    void insert(string word) {
        TrieNode* current = root.get();
        for (char letter : word) {
            if (current->nextNodes.find(letter) == current->nextNodes.end()) {
                current->nextNodes[letter] = make_unique<TrieNode>();
            }
            current = current->nextNodes[letter].get();
        }
        current->isEndOfWord = true; // Mark the end of the word
    }
    
    bool search(string word) {
        TrieNode* current = root.get();
        for (char letter : word) {
            if (current->nextNodes.find(letter) == current->nextNodes.end()) {
                return false;
            }
            current = current->nextNodes[letter].get();
        }
        return current->isEndOfWord; // Check if it's the end of a word
    }
    
    bool startsWith(string prefix) {
        TrieNode* current = root.get();
        for (char letter : prefix) {
            if (current->nextNodes.find(letter) == current->nextNodes.end()) {
                return false;
            }
            current = current->nextNodes[letter].get();
        }
        return true; // If the prefix exists in the trie
    }
};