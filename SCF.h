#pragma once

//
// 
// SCF - Standart C++ Functions
//
//

#include <string>
#include <vector>

#define csize const size_t
#define __ftext int i = 0; i < size; i++
#define __ftextm int i = 0; i < size-1; i++
#define __temp template <typename _T>

using std::string;
using std::vector;
using std::cout;
using std::endl;


// �������
// in:		
// out:		void: -


// string



// ������� ��������� ������ �� ��������� �� �����������.
// in:	text:			�����, ������� ����� ���������
//		delimeter:		������-����������� (�� ��������� - ������, ���������� ������ �� �����)
// out: vector<string>:	������ vector � ������������ �������� ��������� (� ������ �������� �������)

vector<string> split(string text, char delimeter = ' ')
{
	int pointer = 0;
	vector<string> vct;
	csize size = text.size();
	for (int i = 0; i < size-1; i++)
	{
		if (text[i] == delimeter && i != 0)
		{
			string _text = "";
			for (int j = pointer; j < i; j++)
			{
				_text += text[j];
			}
			pointer = i;
			vct.push_back(_text);
		}
	}
	string _text;
	_text = "";
	for (int j = pointer; j < size; j++)
	{
		_text += text[j];
	}
	vct.push_back(_text);
	return vct;
}



// ������� �������� ��� ������� wRep �� tRep � ������ text
// in:		text:		�����, � ������� ����� �������� �������
//			wRep:		������, ������� ����� ��������
//			tRep:		������, ������� ����� ��������
// out:		string:		����� � ����������� ���������

string replace(string text, char wRep, char tRep = '\0')
{
	csize size = text.size();
	for (__ftext)
	{
		if (text[i] == wRep) text[i] = tRep;
	}
	return text;
}



// prints

// ������� ������� text �� �����
// in:		text: �����, ������� ����� �������	
// out:		void: -

__temp
void print(_T text)
{
	cout << text;
}

// ������� ������� text �� ����� � ��������� �� ����� ������
// in:		text: �����, ������� ����� �������	
// out:		void: -

__temp
void printLn(_T text)
{
	cout << text << endl;
}

// ������� ������� ������ vct �� �����
// in:		vct: ������ ������ ��� ������
// out:		void: -

__temp
void print(vector<_T> vct)
{
	size_t size = vct.size();
	print("[");
	for (__ftextm)
	{
		print(vct[i]);
		cout << ", ";
	}
	print(vct[size - 1]);
	cout << "]";
}

// ������� ������� ������ vct �� ����� � ��������� �� ����� ������
// in:		vct: ������ ������ ��� ������
// out:		void: -

__temp
void printLn(vector<_T> vct)
{
	size_t size = vct.size();
	print("[");
	for (__ftextm)
	{
		print(vct[i]);
		cout << ", ";
	}
	print(vct[size - 1]);
	cout << "]" << endl;
}

// ������� ������� ������� vct �� �����
// in:		vct: ������ ������ ��� ������
// out:		void: -

__temp
void printMatrix(vector <vector<_T>> vect)
{
	csize size = vect.size();
	cout << "[\t" << endl;
	for (__ftext)
	{
		cout << "\t";
		print(vect[i]);
		cout << endl;
	}
	cout << "]\t" << endl;
}

// convert

// ������� ������������ ������ � ���������� ���� int � ������ � ���������� ���� string
// in:		vct:			������ ������ � ���������� int
// out:		vector<string>:	������ ������ � ���������� string

vector<string> convertV(vector<int> vct)
{
	csize size = vct.size();
	vector<string> vect;
	for (int i = 0; i < size; i++)
	{
		vect.push_back(std::to_string(vct[i]));
	}
	return vect;
}

// ������� ������������ ������ � ���������� ���� string � ������ � ���������� ���� int
// in:		vct:			������ ������ � ���������� string
// out:		vector<string>:	������ ������ � ���������� int

vector<int> convertV(vector<string> vct)
{
	csize size = vct.size();
	vector<int> vect;
	for (int i = 0; i < size; i++)
	{
		vect.push_back(std::stoi(vct[i]));
	}
	return vect;
}