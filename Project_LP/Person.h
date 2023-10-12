#pragma once

#include <iostream>
using namespace std;

class Person
{
public:
	Person();
	Person(const Person&);
	~Person();

	void SetNum(int num);
	int GetNum() const;

	const Person* GetConstVal()
	{
		cout << "get const val" << endl;
		return this;
	}

	Person* GetAddr()
	{
		cout << "get addr" << endl;
		return this;
	}

private:
	int* m_npNum;
};

