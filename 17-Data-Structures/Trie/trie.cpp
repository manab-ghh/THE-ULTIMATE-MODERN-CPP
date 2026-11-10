#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    vector<Node*> children;
    bool eow;

    Node() {
        children.resize(26, nullptr);
        eow = false;
    }
};

class Trie {
    Node* root = new Node();

    public:

    void insert(string word) {
        Node* temp = root;

        for (int i = 0; i < word.length(); i++) {
            int idx = word[i] - 'a';

            if (temp->children[idx] == nullptr) {
                temp->children[idx] = new Node();
            }

            temp = temp->children[idx];

            if (i == word.length() - 1) {
                temp->eow = true;
            }

        }
    }

    bool search(string word) {
        Node* temp = root;

        for (int i = 0; i < word.length(); i++) {
            int idx = word[i] - 'a';
            Node* node = temp->children[idx];

            if (node == nullptr) {
                return false;
            }

            if (i == word.length() - 1 && node->eow == false) {
                return false;
            }

            temp = temp->children[idx];
        }

        return true;
    }

};

int main() {
    vector<string> vec = {"the", "a", "there", "their", "any"};

    Trie trie;

    for (int i = 0; i < vec.size(); i++) {
        trie.insert(vec[i]);
    }

    cout << trie.search("their") << endl;
    cout << trie.search("thor") << endl;
    cout << trie.search("an") << endl;
    
    return 0;
}