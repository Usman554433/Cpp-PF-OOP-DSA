#include<iostream>
using namespace std;

class Sample{
private:
	int x;
    double y;
public:
	// Constructor 1: Initializes private data members to 0.
	Sample()
	{
		x = 0;
		y = 0;
	}
	
	// Constructor 2: Initializes x with the value of the parameter and y to 0.
	Sample(int a)
	{
		x = a;
		y = 0;
	}
	
	// Constructor 3: Initializes x and y according to the values of parameters.
	Sample(int a, int b)
	{
		x = a;
		y = b;
	}
	
	// Constructor 4: Initializes x and y according to the values of parameters.
	Sample(int a, double b)
	{
		x = a;
		y = b;
	}
	
	// Function to print private data members x and y.
	void print()
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

int main()
{
	// Creating objects and testing constructors.
	Sample s1; // Using Constructor 1
	Sample s2(10, 2.121); // Using Constructor 4
	s2.print();
	
	return 0;
}
