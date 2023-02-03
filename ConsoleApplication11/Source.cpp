#include <iostream>
#include <conio.h>
using namespace std;
template <typename T>
void display(T* items, int size);
int countAll(const string where, const string what);
int* findAll(string where, string what, int& count);
string toUpr(const string text);
int* findAllR(const string where, const string what, int& count);
int main()
{
	string text
	{ R"(
 If you can keep your head when all about you
 Are losing theirsand blaming it on you;
 If you can trust yourself when all men doubt you,
 But make allowance for their doubting too :
 If you can wait and not be tired by waiting,
 Or, being lied about, don't deal in lies,
 Or being hated don't give way to hating,
 And yet don't look too good, nor talk too wise;
 )" };
	cout << "In text" << endl;
	cout << text << endl;
	cout << "Search for word \"and\"" << endl;
	cout << endl;
	cout << "case sensitive" << endl;
	int count;
	int* pos = findAll(text, "and", count);
	display(pos, count);
	cout << endl;
	cout << "case insensitive" << endl;
	pos = findAllR(text, "and", count);
	display(pos, count);
	_getch();
	return 0;
}