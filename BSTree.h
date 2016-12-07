#include "Account.h"
#pragma once
class BSTree
{

private:
	struct Node
	{
		Account *pAcct;
		Node *right = nullptr;
		Node *left = nullptr;
	};
	Node *root;
	int size;

	void recursiveDisplay(Node *print) const;
	void recursiveEmpty(Node *temp);
public:
	BSTree();
	~BSTree();

	bool Insert(Account *toInsert);

	bool Retrieve(const int &acctId, Account*& objPtr) const;

	void Display() const;
	void Empty();
	bool isEmpty() const; 
	int getSize() const;

};

