#include <iostream>
#include <fstream>
#include <string>
#include<conio.h>
#include "BookE.h"
#include "BookList.h"
using namespace std;

BookList list;

void welcome();
void mainMenu();
void add_book();
void search_book();

int main()
{
    list.ReadBook();
    list.ShowBook(1);
    // welcome();
    mainMenu();

    return 0;
}

void welcome()
{
    system("cls");
    cout << "####################################" << endl;
    cout << "ͼ�����ϵͳ" << endl;
    cout << "####################################" << endl;
    cout << "�����������......" << endl;
}

void mainMenu()
{
    while (1)
    {
        system("cls");
        cout << "1. ͼ������" << endl;
        cout << "2. ͼ���ѯ" << endl;
        cout << "3. ͼ��ɾ��" << endl;
        cout << "4. ͼ�����" << endl;
        cout << "5. ͼ���޸�" << endl;
        cout << "6. ����ͼ��" << endl;
        cout << "7. �˳�ϵͳ" << endl;
        cout << "��ѡ����Ĺ���: ";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            add_book();
            break;
        case 2:
            search_book();
            break;
        case 3:break;
        case 4:
            system("cls");
            list.ShowBookTitle();
            list.ShowAll();
            system("pause");
            break;
        case 5:break;
        case 6:
            system("cls");
            list.WriteBook();
            cout << "����ɹ�" << endl;
            system("pause");
            break;
        case 7:
            exit(0);
            break;
        }
    }
}

void add_book()
{


    while (1)
    {
        system("cls");
        string name, isbn, pub, writer;
        double price;
        int quantity;
        cout << "����������:";
        cin >> name;
        cout << "������۸�:";
        cin >> price;
        cout << "������ISBN���:";
        cin >> isbn;
        cout << "�����������:";
        cin >> pub;
        cout << "����������:";
        cin >> writer;
        cout << "����������:";
        cin >> quantity;
        BookE be(name, price, isbn, pub, writer, quantity);
        list.Insert(be);
        cout << "��ӳɹ�!" << endl;

        cout << "------------------------" << endl;;
        cout << "1. �������" << endl;
        cout << "2. ����" << endl;
        cout << "��ѡ��: ";
        int ch;
        cin >> ch;
        while (ch != 1 && ch != 2)
        {
            cout << "ѡ���������ѡ��: ";
            cin >> ch;
        }
        if (ch == 2)
        {
            break;
        }
    }
}

void search_book()
{
    while (1)
    {
        system("cls");
        cout << "1. ��ͼ�����Ʋ�ѯ" << endl;
        cout << "2. ��ISBN��Ų�ѯ" << endl;
        cout << "3. �������߲�ѯ" << endl;
        cout << "4. ���ݳ������ѯ" << endl;
        cout << "��ѡ��: ";
        int ch;
        cin >> ch;
        while (ch != 1 && ch != 2 && ch != 3 && ch != 4)
        {
            cout << "ѡ���������ѡ��: ";
            cin >> ch;
        }

        int pos = -1;
        if (ch == 1)
        {// ��ͼ�����Ʋ�ѯ
            string name;
            cout << "������ͼ������: ";
            cin >> name;
            pos = list.Search(name);
        }
        else if (ch == 2)
        {// ��ISBN��Ų�ѯ
            string isbn;
            cout << "������ISBN���:";
            cin >> isbn;
            pos = list.SearchIsbn(isbn);
        }
        else if (ch == 3)
        {// �������߲�ѯ
            string writer;
            cout << "����������: ";
            cin >> writer;
            pos = list.SearchWriter(writer);
        }
        else if (ch == 4)
        {// ���ݳ������ѯ7
            string publisher;
            cout << "�����������:";
            cin >> publisher;
            pos = list.SearchPublisher(publisher);
        }
        cout << "-------------------------" << endl;
        cout << "��ѯ���Ϊ:" << endl;

        if (pos == -1)
        {
            cout << "δ�ҵ�" << endl;
        }
        else
        {
            list.ShowBookTitle();
            list.ShowBook(pos);
        }
        cout << "------------------------" << endl;;
        cout << "1. ������ѯ" << endl;
        cout << "2. ����" << endl;
        cout << "��ѡ��: ";
        cin >> ch;
        while (ch != 1 && ch != 2)
        {
            cout << "ѡ���������ѡ��: ";
            cin >> ch;
        }
        if (ch == 2)
        {
            break;
        }
    }
}