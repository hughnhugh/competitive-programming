#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    unordered_map<char, unique_ptr<TrieNode>> nextNodes;
    bool isEndOfWord = false; // Flag to indicate the end of a word

    TrieNode() = default;
};

class WordDictionary {
public:
    unique_ptr<TrieNode> root;
    WordDictionary() : root(make_unique<TrieNode>()) {} // Initialize root in the constructor

    void addWord(string word) {
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
        return recursiveSearch(root.get(), word, 0);
    }

    bool recursiveSearch(TrieNode* node, const string& word, int index) {
        if (index == word.length()) return node->isEndOfWord;

        char letter = word[index];
        if (letter == '.') {
            for (auto& paths : node->nextNodes) {
                if (recursiveSearch(paths.second.get(), word, index + 1)) return true;
            }
            return false;
        } else {
            auto it = node->nextNodes.find(letter);
            if (it == node->nextNodes.end()) {
                return false;
            }
            return recursiveSearch(it->second.get(), word, index + 1);
        }
    }
};