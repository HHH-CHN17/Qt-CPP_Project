#include "Person.h"

Person::Person()
{
	m_npNum = NULL;
}
Person::Person(const Person& p)
{
	//在重写时：
	//1.new一份新的堆区地址
	//2.在新地址中进行数据复制
	
	//综上，避免浅拷贝的解决办法是在拷贝构造函数中
	//不复制地址，仅复制堆区中存放的数据。
	m_npNum = new int();
	*m_npNum = p.GetNum();
}

Person::~Person()
{
	delete m_npNum;
}

void Person::SetNum(int num)
{
	if (!m_npNum)
	{
		m_npNum = new int(num);
	}
}

int Person::GetNum() const
{
	return *m_npNum;
}