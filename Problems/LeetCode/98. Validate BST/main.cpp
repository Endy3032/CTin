#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
	bool isValidBST(TreeNode *root) {
		return isValidNode(root, LLONG_MIN, LLONG_MAX);
	}

	bool isValidNode(TreeNode *node, long long min, long long max) {
		if (node == NULL) return true;
		if (node->val <= min || node->val >= max) return false;
		return isValidNode(node->left, min, node->val) && isValidNode(node->right, node->val, max);
	}
};
