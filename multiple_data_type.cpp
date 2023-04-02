# include <iostream>
using namespace std;

int main4()
{
	//sizeof: find the size of each data structuer
	short num1 = 32767;//-32768~32767
	int num2 = 0;
	long num3 = 0;
	long long num4 = 0;


	cout << "num1="<<num1<< endl;
	cout << "size of short: " << sizeof(num1) << endl;
	cout << "size of short: " << sizeof(short) << endl;//name of data type/variable are the same
	cout << "size of int: " << sizeof(num2) << endl;
	cout << "size of long: " << sizeof(num3) << endl;
	cout << "size of long long: " << sizeof(num4) << endl;
	// float double
	float f1 = 3.1415926f;//f means float, otherwise will be seen as double
	
	double d1 = 3.1415926;//
	//default: print 6 numbers after .
	cout << "f1: " << f1 << endl;
	cout << "d1: " << d1 << endl;
	cout << "size of float: " << sizeof(f1)<< endl;
	cout << "size of double: " << sizeof(d1) << endl;

	//Scientific notation
	float f2 = 3e2;//3*10^2
	float f3 = 3e-3;//3*10^-3
	cout << "f2= " << f2 << endl;
	cout << "f3=" << f3 << endl;




	system("pause");
	return 0;

}

