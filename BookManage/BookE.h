#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Book.h"

class BookE : public Book
{
private:
	string isbn;  // ���
	string publisher; // ������
	string writer; // ����
	int quantity; // ����
public:
	BookE() {};
	BookE(string name, double price, string isbn, string publisher
		, string writer, int quantity) :
		Book(name, price), isbn(isbn), publisher(publisher), 
		writer(writer), quantity(quantity) {};
	string get_writer(); // ��ȡ����
	void setWriter(string writer); // ��������
	string get_publisher(); // ��ȡ������
	void setPublisher(string publisher); // ���ó�����
	int get_quantity(); // ��ȡ����
	void setQuantity(int quantity); // ��������
	string get_isbn();
	void setIsbn(string isbn);
	friend ostream& operator<<(ostream& output, const BookE& be);  // ���������������
};