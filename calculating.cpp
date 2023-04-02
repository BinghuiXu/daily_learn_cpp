# include <iostream>
using namespace std;
int main1() {
	/*
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;

	cout << b1 / a1 << endl;

	double a2 = 0.5;
	double b2 = 0.15;
	cout << a2 / b2 << endl;// if you want to output a demical, use demical to devide demical

	cout << a1 % b1 << endl;
	cout << a1 % 20 << endl;
	//cout << a2 % b2 << endl;//2 demicals cannot do the remainder operation
	*/

	//using ++a, first do the self addition, then execute expression
	int a3 = 10;
	int b3 = 10;
	cout << ++a3 * b3 << endl;
	cout << a3 << endl;

	//using ++a, first execute expression , then do the calculation
	int a4 = 10;
	int b4 = 10;
	cout << a4++ * b4 << endl;
	cout << a4 << endl;





	system("pause");
	return 0;

}
