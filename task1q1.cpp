#include<iostream>
using namespace std;
class DM
{
public:
	double meter, centimeter;
};
class DB
{
public:
	double feet, inches;
	friend void add(DM, DB);
};
void add(DM dm, DB db)
{
	double d1, d2;
	cout << "Enter the distance in meter: ";
	cin >> dm.meter;
	cout << "Enter the distance in centimeter: ";
	cin >> dm.centimeter;
	cout << "Enter the distance in feet: ";
	cin >> db.feet;
	cout << "Enter the distance in inches: ";
	cin >> db.inches;
	d1 = dm.meter + (db.feet) / 3.281;
	d2 = dm.centimeter + (db.inches) * 2.54;
	cout << "Meter + Feet = " << d1 << " meter" << endl;
	cout << "Centimeter + inches = " << d2 << " centimeter" << endl;
}
int main()
{
	DM dm;
	DB db;
	add(dm, db);
	return 0;
