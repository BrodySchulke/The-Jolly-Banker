#include <fstream>
#include "BSTree.h"
#include "Transaction.h"
#include <queue>
#pragma once
class Bank
{
private:
	BSTree bankAccounts;
	queue<Transaction> theQueue;
	queue<string> history;
public:
	Bank();
	~Bank();
	void buildQueue(string FileName);
	void useQueue();
};

