#include <iostream>
using namespace std;

void fun()
{
	// ��̬�ֲ��������ڳ�����ֻ��ʼ��һ�Σ����һ�һֱ��������������
	static int m = 3;

	m += 1;

	cout << m << endl;
}

int main()
{
	fun(); // ��һ�ε��ã�m��ʼ��������������m��Ȼ����
	fun(); // �ڶ��ε��ã�m���ٳ�ʼ����ʹ��֮ǰ��ֵ
	fun(); // ͬ��

	return 0;
}