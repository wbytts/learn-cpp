#include <iostream>
using namespace std;

// ����һ��Ҫ�õĺ���������һ��cpp��ʵ�֣�
// ����������ˣ���ôд�鷳������д�� .h
void fun();

// ����һ��ȫ�ֱ���
int g_var = 3;

int main()
{
	// ���������д�ӡȫ�ֱ���
	cout << g_var << endl;
	g_var = 4;
	// ������һ���ļ��еĺ�����ӡȫ�ֱ���
	fun();

	return 0;
}