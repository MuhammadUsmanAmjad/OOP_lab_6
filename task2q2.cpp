#include<iostream>
using namespace std;
class polynomial {
	int* coeff ;
	int* expo;
	int size = 0;
	friend polynomial operator++(polynomial&obj);
	friend polynomial operator++ (polynomial&obj, int a);
	friend ostream& operator<<(ostream& o, polynomial obj);
	friend bool operator!(polynomial& obj);
	friend bool operator!=(polynomial& obj, polynomial& obj1);
public:
	polynomial()
	{
	}
	polynomial(int a, int b[], int c[])
	{
		size = a;
		coeff = new int[a];
		expo = new int[a];
		for (int i = 0; i < a; i++)
		{
			coeff[i] = b[i];
			expo[i] = c[i];

		}
	}
	~polynomial()
	{
		delete[]coeff;
		delete[]expo;
	}

};
// for post and pre increment
polynomial operator++ (polynomial&obj)
{
	for (int i = 0; i < obj.size; i++)
	{
		obj.coeff[i] = (obj.coeff[i] + 1);
		obj.expo[i];
	}
	return obj;
}
polynomial operator++ (polynomial&obj, int a)
{
	for (int i = 0; i < obj.size; i++)
	{
		obj.coeff[i]=obj.coeff[i]+1;
		obj.expo[i];
	}
	return obj;
}

ostream& operator<<(ostream& o, polynomial obj)
{
	int i = 0;
	for (; i < obj.size; i++)
	{
		if (obj.coeff[i] >= 0)
			o << "+" << obj.coeff[i] << "x^" << obj.expo[i];
		else
			o << obj.coeff[i] << "x^" << obj.expo[i];

	}
	cout << endl;
	return o;
}
bool operator!(polynomial& obj)
{
	for (int i = 0; i < obj.size; i++)
	{
		if (obj.coeff[i] != 0 && obj.expo[i] != 0)
		{
			return true;
		}
	}
	return false;
}
bool operator!=(polynomial& obj, polynomial& obj1)
{
	int count = 0;
	if (obj.size != obj1.size)
		return true;
	else {
		for (int i = 0; i < obj.size; i++)
		{
			for (int j = 0; j < obj1.size; j++)
			{
				if ((obj.coeff[i] == obj1.coeff[j]) && (obj.expo[i] == obj1.expo[j]))
					count++;
			}
		}
		if (count == obj.size && count == obj1.size)
		{
			return false;
		}
		return true;
	}

}
int main()
{
	int coeff_P1[] = { 1,2,5 };//Coefficients for Polynomial P1

	int exp_P1[] = { 4,2,0 }; //Exponents for Polynomial P1

	int coeff_P2[] = { 4,3 };//Coefficients for Polynomial P2

	int exp_P2[] = { 6,2 }; //Exponents for Polynomial P2

	polynomial P1(3, coeff_P1, exp_P1);//Creates P1 with 3 terms (P1 = 1x^4 + 2x^2 + 5x^0 ) 
	polynomial P2(2, coeff_P2, exp_P2);//Creates P2 with 2 terms (P2 = 4x^6 + 3x^2)
	cout << "P1 = ";
	cout << P1; //Prints P1 = x^4+2x^2+5 
	cout << "P2 = ";
	cout << P2; //Prints P2 = 4x^6+3x^2    
	if (!P1)
		cout << "P1 is zero" << endl;/*if polynomial has only 1 term and its coeff and exp are zero.i.e. if p1 = 0.*/
	if (P1 != P2)
	cout << "P1 is Not Equal to P2" << endl;
	
	cout << ++P1 << endl;//adds 1 in all the coefficient. 
	cout << P1 << endl;
	cout << P1++ << endl; //adds 1 in all the coefficient.
	cout << P1 << endl;
	//Polynomial P3 = P1+P2; //Adds P1 and P2 and saves result in P3.You may consume extra space for resultant Polynomial in Add function cout<<"P3 = "<<P3<<endl; //Prints P3 = 4x^6+x^4+5x^2+5
	//P3 = 2 + P1; //Assume P1 already has a constant term, add 2 in it.
	//cout<<"P3 = "<<P3<<endl;
}
