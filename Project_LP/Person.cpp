#include "Person.h"

Person::Person()
{
	m_npNum = NULL;
}
Person::Person(const Person& p)
{
	//����дʱ��
	//1.newһ���µĶ�����ַ
	//2.���µ�ַ�н������ݸ���
	
	//���ϣ�����ǳ�����Ľ���취���ڿ������캯����
	//�����Ƶ�ַ�������ƶ����д�ŵ����ݡ�
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