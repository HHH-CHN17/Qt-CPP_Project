#include<iostream>
#include <string>

using namespace std;

//注意：virtual与override都只在函数申明阶段使用，实现的时候不用写
class Base
{
public:
	virtual void speak();
};
void Base::speak()
{
	cout << "hello base" << endl;
}

//动态多态满足条件：(重载属于静态多态)
//1.子类继承父类
class son :public Base
{
public:
	//2.子类重写父类虚函数
	void speak() override;
};
void son::speak()
{
	cout << "hello son" << endl;
}

//动态多态使用：
//父类指针或引用指向子类对象
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