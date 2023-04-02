# include <iostream>
# include <string>


using namespace std;

int main5() {
	char ch = 'a';
	cout << "size of char: " << sizeof(char) << endl;
	cout << "ascii of 'a': " << (int)ch << endl;
	cout << "ascii of 'A': " << (int)'A' << endl;
	
	//escape character
	cout << "Hello world!\n";// \n change tp a new row
	cout << "\\\n";// \\ means"\"
	cout << "1\tHello world\n";// \t getting a new tab(8 space)
	cout << "23\tI am Billy\n";

	//string
	//1. c style
	char str[] = "Hello world";
	cout << "c style string: " << str << endl;
	//2. c++ style (need include string)
	string string2 = "Hello world2";
	cout << "c++ style string: " << string2 << endl;
	

	system("pause");
	return 0;
}