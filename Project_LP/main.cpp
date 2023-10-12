#include<iostream>
#include <string>
#include <functional>
#include <unordered_map>
#include <list>


using namespace std;

class Son
{
public:
	void SayHello(string str)
	{
		cout << str << endl;
	}
};

//如果不用bind的话，function的Son由外界提供实参，
//string由调用者函数提供实参（即在函数内部赋值）
void DadFunc(function<void(Son, string)> funcCallback, Son son);	

const int* func(const int x)
{
	return &x;
}

int main()
{
	unique_ptr<string> p1;
	string* str = new string("ssss");
	p1.reset(str);
	
	unique_ptr<string> p2;
	p2.reset(str);
	cout << "p2: " << *p2 << endl;
	cout << "p1: " << *p1 << endl;


	system("pause");
	return 0;
}

void DadFunc(function<void(Son, string)> funcCallback, Son son)
{
	cout << "this is dad" << endl;
	
	funcCallback(son, "111");							//显然这样不能完全把调用者函数和回调函数进行解耦

	cout << "dad is out" << endl;

}