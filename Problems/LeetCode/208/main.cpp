#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
	TrieNode *nodes[32];
	bool isWord;

	TrieNode() {
		isWord = false;
		for (auto &i: nodes) i = nullptr;
	}
};

class Trie {
public:
	TrieNode* root;

	Trie() {
		root = new TrieNode();
	}

	void insert(string word) {
		TrieNode *p = root;
		for (auto &c: word) {
			int i = c - 'a';
			if (!p->nodes[i]) p->nodes[i] = new TrieNode();
			p = p->nodes[i];
		}
		p->isWord = true;
	}

	bool search(string word, bool isSearchWord = true) {
		TrieNode *p = root;
		for (auto &c: word) {
			int i = c - 'a';
			if (!p->nodes[i]) return false;
			p = p->nodes[i];
		}
		return isSearchWord ? p->isWord : true;
	}

	bool startsWith(string prefix) {
		return search(prefix, false);
	}
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */