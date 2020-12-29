#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "BookE.h"

#define BOOK_LIST_SIZE 100 // ����BookList �洢�����ͼ�����������ǽ����ö�̬���ڴ����ɣ�

/*
	��װ��BookE��Ķ������� booklist[]�����ݳ�Ա��
	���ڴ��ͼ���б�����
*/
class BookList
{
private:
	int size; // ��ǰ�洢��ͼ�������
	BookE booklist[BOOK_LIST_SIZE];
public:
	BookList();
	// ��ָ��ͼ�����ơ���ŵ���Ϣ����һ��ͼ����Ϣ
	void Insert(BookE& be);
	// ������ʾ�±�Ϊi��ͼ����Ϣ
	void ShowBook(int i);
	// ���ڰ���������ͼ�飬�����ҵ���ͼ���б��±�
	int Search(const string& name);
	// ���ڰ���Ų���ͼ�飬�����ҵ���ͼ���б��±�
	int SearchIsbn(const string& isbn);
	// ���ڰ����߲���ͼ�飬�����ҵ���ͼ���б��±�
	int SearchWriter(const string& writer);
	// ���ڰ����������ͼ�飬�����ҵ���ͼ���б��±�
	int SearchPublisher(const string& publisher);
	// �����޸��±�Ϊi��ͼ������
	void Update(int i, string newName);
	// ����ɾ���±�Ϊi��ͼ���б���
	void Delete(int i);
	// ������ʾͼ�����Ϣ��ͷ
	void ShowBookTitle();
	// ������������������ͼ����Ϣ
	void ShowAll();
	// ���ڽ��ڴ��е�ͼ���б�booklist[]��Ϣ�����д�룩�������̣��ļ�
	void WriteBook();
	// ���ڽ������̣��ļ��е�ͼ����Ϣ�����ڴ�ͼ���б�booklist[]
	void ReadBook();
};