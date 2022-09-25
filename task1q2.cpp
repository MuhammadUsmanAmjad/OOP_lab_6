//#include<iostream>
//using namespace std;
//
//class integer {
//	int* arr;
//	int size=1;
//	
//public:
//	friend int largest(integer&);
//	friend int smallest(integer&);
//	friend void sort(integer&);
//	friend void check_doubles(integer&);
//	integer()
//	{
//		arr = new int[size];
//
//	}
//	void input()
//	{
//		cout << "enter size:" << endl;
//		cin >> size;
//		cout << "enter elements in array:" << endl;
//		for (int i = 0; i < size; i++)
//			cin >> arr[i];
//		
//	}
//
//	void output()
//	{
//		for (int i = 0; i < size; i++)
//			cout << arr[i] << "  ";
//	}
//	~integer()
//	{
//		delete[]arr;
//		cout << "destructor called.";
//		
//	}
//};
//int largest(integer& o)
//{
//	int max = o.arr[0];
//	for (int i = 1; i < o.size; i++)
//	{
//		if (max < o.arr[i])
//			max = o.arr[i];
//	}
//	return max;
//}
//int smallest(integer& o)
//{
//	int min = o.arr[0];
//	for (int i = 1; i < o.size; i++)
//	{
//		if (min > o.arr[i])
//			min = o.arr[i];
//	}
//	return min;
//}
//void sort(integer&o)
//{
//	for (int i = 0; i < o.size; i++)
//	{
//		for (int j = 0; j < o.size - 1 - i; j++)
//		{
//			if (o.arr[j] > o.arr[j + 1])
//			{
//				swap(o.arr[j], o.arr[j + 1]);
//			}
//		}
//	}
//	cout << "\n sorted array is:\n";
//	for (int i = 0; i < o.size; i++)
//	{
//		cout << o.arr[i] << " ";
//	}
//}
//void  check_doubles(integer& o)
//{
//	int count = 0;
//	for (int i = 0; i < o.size; i++)
//	{
//		count = 0;
//		for (int j = i; j < o.size - 1; j++)
//		{
//			if (o.arr[i] == o.arr[j + 1])
//			{
//				count++;
//			}
//		}
//		if (count > 0)
//			cout << o.arr[i] << " ";
//	}
//}
//	
//int main()
//{
//	integer obj;
//	obj.input();
//	cout<< endl;
//	obj.output();
//	cout << endl;
//	cout << largest(obj);
//	cout << endl;
//	cout << smallest(obj);
//	cout << endl;
//	sort(obj);
//	cout << endl;
//	check_doubles(obj);
//	
//	
//}
//
