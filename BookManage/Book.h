#pragma once
#include <iostream>
#include <string>
using namespace std;


class Book
{
private:
	string name;   // ����
	double price;  // �۸�
public:
	Book() {};
	Book(string name, double price) : name(name), price(price) {};
	string get_Name();				// ��ȡ����
	void setName(string name);		// ��������
	double get_Price();				// ��ȡ�۸�
	void SetPrice(double price);	// ���ü۸�
};