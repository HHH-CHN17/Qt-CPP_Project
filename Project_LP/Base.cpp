#include<iostream>
#include <string>

using namespace std;

//ע�⣺virtual��override��ֻ�ں��������׶�ʹ�ã�ʵ�ֵ�ʱ����д
class Base
{
public:
	virtual void speak();
};
void Base::speak()
{
	cout << "hello base" << endl;
}

//��̬��̬����������(�������ھ�̬��̬)
//1.����̳и���
class son :public Base
{
public:
	//2.������д�����麯��
	void speak() override;
};
void son::speak()
{
	cout << "hello son" << endl;
}

//��̬��̬ʹ�ã�
//����ָ�������ָ���������
void test(Base& p)
{
	p.speak();
}

void test1(const char* charStr)
{
	int a = 1;
	char b[] = { '1','2','\0' };
	charStr = b;
	cout << charStr << endl;

	string str = charStr;
	str = "nihao";
	//cout << str;
}