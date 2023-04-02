# include <iostream>
# include <string>
# include <typeinfo>
using namespace std;

int main() {
	/*
	bool key = true;
	key = true;
	cout << "type of key: " << typeid(key).name() << endl;
	cout << "value of key: "<<key<<endl;
	cout << "length of bool: " << sizeof(key) << endl;
	*/

	//int a = 0;
	//cout << "please input a integer" << endl;
	//cin >> a;
	//cout << "The int you typed in is: " << a << endl;

	//float f= 0.0f;
	//cout << "please input a float" << endl;
	//cin >> f;
	//cout << "The number you typed in is: " << f << endl;

	char ch = 'a';
	cout << "please input char" << endl;
	cin >> ch;
	cout << "The thing you typed in is: " << ch << endl;
	
	string str = "";
	cout << "please input a string" << endl;
	cin >> str;
	cout << "The thing you typed in is: " << str << endl;
	
	bool key = 0;
	cout << "please input a bool" << endl;
	cin >> key;
	cout << "The bool you typed in is: " << key << endl;

	system("pause");
	return 0;



}


