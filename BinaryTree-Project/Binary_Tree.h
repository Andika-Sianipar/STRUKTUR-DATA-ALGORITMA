#include <iostream>

using namespace std;

class Node{
	public:
		int val;
		
		Node *left;
		Node *right;
		
		Node(){
			left = right = NULL;
		}
};

class BinaryTree{
	public:
		void insertNode(int);
		Node *insertNodeRecursive(Node*, int);
		
		void deleteNode(int);
		Node *deleteNodeRecursive(Node*, int);
		
		void findMin();
		Node *findMinRecursive(Node*);
		
		void findMax();
		Node *findMaxRecursive(Node*);
		
		void searchNode(int);
		Node *searchNodeRecursive(Node*, int);
		
		void preOrder();
		Node *preOrderRecursive(Node*);
		
		void inOrder();
		Node *inOrderRecursive(Node*);
		
		void postOrder();
		Node *postOrderRecursive(Node*);
		
		Node *root;
		
		int maxVal;
		int minVal;
		
		
		void Binary_Tree(){
			root = NULL;
		}
};
