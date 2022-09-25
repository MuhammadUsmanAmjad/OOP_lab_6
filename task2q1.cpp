//#include<iostream>
//#include<fstream>
//using namespace std;
//class complex_numbers
//{
//	int real;
//	int imaginary;
//	friend complex_numbers operator-(complex_numbers obj, complex_numbers obj1);
//	friend ostream& operator<< (ostream& o, complex_numbers obj);
//	friend bool operator==(complex_numbers obj, complex_numbers obj1);
//	friend bool operator!=(complex_numbers obj, complex_numbers obj1);
//	friend istream& operator>> (istream& o, complex_numbers&obj);
//public:
//	complex_numbers()
//	{
//		real = 0;
//		imaginary = 0;
//	}
//	//overloaded constructor
//	complex_numbers(int a, int b)
//	{
//		real = a;
//		imaginary = b;
//	}
//	//copy constructor
//	complex_numbers(complex_numbers&obj)
//	{
//		real = obj.real;
//		imaginary = obj.imaginary;
//		
//	}
//	
//	/*complex_numbers operator+(complex_numbers obj)
//	{
//		complex_numbers temp;
//		temp.real = real + obj.real;
//		temp.imaginary = imaginary + obj.imaginary;
//		return temp;
//	}*/
//
//	complex_numbers multiply(complex_numbers obj)
//	{
//		complex_numbers temp;
//		temp.real = (real * obj.real) - (imaginary * obj.imaginary);
//		temp.imaginary = (real * obj.imaginary) + (obj.real * imaginary);
//		return temp;
//	}
//
// ~complex_numbers()
// {
// cout<<"destructor called."<<endl;
// }
//};
//complex_numbers operator-(complex_numbers obj, complex_numbers obj1)
//{
//	complex_numbers temp;
//	temp.real = obj1.real - obj.real;
//	temp.imaginary = obj1.imaginary - obj.imaginary;
//	return temp;
//}
//ostream& operator<< (ostream & o, complex_numbers obj)
//{
//	if(obj.imaginary>=0)
//	o << obj.real << "+" << obj.imaginary << "i" << endl;
//	else
//	o << obj.real <<  obj.imaginary << "i" << endl;
//	return o;
//}
//istream& operator>> (istream& o, complex_numbers&obj)
//{    
//	cout << "enter real part:   ";
//	o >> obj.real;
//	cout << "enter imaginary part:   ";
//	o >> obj.imaginary;
//	return o;
//}
//bool operator==(complex_numbers obj,complex_numbers obj1)
//{
//	if (obj.real == obj1.real && obj.imaginary == obj1.imaginary)
//	{
//		return true;
//	}
//	return false;
//}
//bool operator!=(complex_numbers obj,complex_numbers obj1)
//{
//	if (obj.real == obj1.real && obj.imaginary == obj1.imaginary)
//	{
//		return false;
//	}
//	return true;
//}
//int main()
//{
//	complex_numbers C1; 
//	complex_numbers C2(5, 6); 
//	complex_numbers C3;
//	cout << "Input a complex number" << endl;
//	cin >> C3;
//	cout << C1 << C2 << C3;
//	if (C1 == C2) 
//		cout << "C1 == C2" << endl; 
//	else 
//		cout << "C1 != C2" << endl;
//	if (C1 != C3)
//		cout << "C1 != C3" << endl; 
//	else
//		cout << "C1==C3" << endl;
//	complex_numbers C4 = C3;
//		C4=C4-C2; 
//	cout << C4;
//	system("pause"); 
//	return 0;
//}
