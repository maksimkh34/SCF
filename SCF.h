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


// Функция
// in:		
// out:		void: -


// string



// Функция разбивает строку на подстроки по разделителю.
// in:	text:			Текст, который нужно разделить
//		delimeter:		Символ-разделитель (по умолчанию - пробел, разделение текста на слова)
// out: vector<string>:	Массив vector с разделенными строками раздельно (в каждом элементе массива)

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



// Функция заменяет все символы wRep на tRep в тексте text
// in:		text:		Текст, в котором нужно заменять символы
//			wRep:		Символ, который нужно заменять
//			tRep:		Симолв, которым нужно заменять
// out:		string:		Текст с замененными символами

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

// Функция выводит text на экран
// in:		text: Текст, который нужно вывести	
// out:		void: -

__temp
void print(_T text)
{
	cout << text;
}

// Функция выводит text на экран и переходит на новую строку
// in:		text: Текст, который нужно вывести	
// out:		void: -

__temp
void printLn(_T text)
{
	cout << text << endl;
}

// Функция выводит массив vct на экран
// in:		vct: Массив вектор для вывода
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

// Функция выводит массив vct на экран и переходит на новую строку
// in:		vct: Массив вектор для вывода
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

// Функция выводит матрицу vct на экран
// in:		vct: Массив вектор для вывода
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

// Функция конвертирует вектор с элементами типа int в вектор с элементами типа string
// in:		vct:			Массив вектор с элементами int
// out:		vector<string>:	Массив вектор с элементами string

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

// Функция конвертирует вектор с элементами типа string в вектор с элементами типа int
// in:		vct:			Массив вектор с элементами string
// out:		vector<string>:	Массив вектор с элементами int

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