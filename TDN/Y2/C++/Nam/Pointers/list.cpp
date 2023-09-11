#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

struct Node {
	int value;
	Node *next, *prev;
};

struct List {
	Node *head, *tail;
};


List* init() {
	List* p = new List;
	p->head = nullptr;
	p->tail = nullptr;
	return p;
}

void append(List* l, int val) {
	if (!l->tail) {
		l->head = new Node;

		l->head->value = val;
		l->head->prev = nullptr;
		l->head->next = nullptr;

		l->tail = l->head;
		return;
	} else {
		Node* p = new Node;

		p->value = val;
		p->prev = l->tail;
		p->next = nullptr;

		l->tail->next = p;
		l->tail = p;
		return;
	}
}

void print_list(List* l) {
	Node* n = l->head;
	while (n) {
		cout << n->value << " ";
		n = n->next;
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	List* l = init();
	int n, t; cin >> n;

	while (n--) {
		cin >> t;
		append(l, t);
	}

	print_list(l);
}
