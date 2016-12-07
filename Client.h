#include<iostream>
#pragma once
using namespace std;
class Client
{

private:
	string first;
	string last;
	
public:

	Client(const string &firstName, const string &lastName);
	~Client();

	string getFirst() const;
	string getLast() const;
	

	void setFirst(const string &newFirst);
	void setLast(const string &newLast);
	
};

