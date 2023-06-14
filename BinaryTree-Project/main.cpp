#include <iostream>
#include "Binary_Tree.h"

int main(int argc, char** argv) {
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(5);
	bin.insertNode(15);
	bin.insertNode(3);
	bin.insertNode(6);
	bin.insertNode(2);
	bin.insertNode(20);
	bin.insertNode(25);

	bin.deleteNode(25);
	
	bin.preOrder();
	cout<<endl;
	
	bin.inOrder();
	cout<<endl;
	
	bin.postOrder();
	cout<<endl;
	
	bin.searchNode(15);
	bin.searchNode(30);

	bin.findMax();
	bin.findMin();


	return 0;
}
