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

//�������bind�Ļ���function��Son������ṩʵ�Σ�
//string�ɵ����ߺ����ṩʵ�Σ����ں����ڲ���ֵ��
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
	
	funcCallback(son, "111");							//��Ȼ����������ȫ�ѵ����ߺ����ͻص��������н���

	cout << "dad is out" << endl;

}