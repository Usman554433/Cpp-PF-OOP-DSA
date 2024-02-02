#include<iostream>
using namespace std;

int main()
{
	// Declare variables to store speed, ticket type, and birthday indicator
	int speed, ticketType;
	char birthday;

	// Prompt user to enter speed
	cout << "Enter Speed: ";
	cin >> speed;

	// Prompt user to indicate whether it's their birthday
	cout << "Is It Your Birthday? (y/n) ";
	cin >> birthday;

	// Check if it's the user's birthday
	if (birthday == 'y')
	{
		// Adjust speed limit if it's the user's birthday
		if (speed <= 65)
		{
			ticketType = 0; // No ticket
		}
		else if (speed >= 66 && speed <= 85)
		{
			ticketType = 1; // Small ticket
		}
		else if (speed >= 86)
		{
			ticketType = 2; // Big ticket
		}
	}
	else if (birthday == 'n') // If it's not the user's birthday
	{
		if (speed <= 60)
		{
			ticketType = 0; // No ticket
		}
		else if (speed >= 61 && speed <= 80)
		{
			ticketType = 1; // Small ticket
		}
		else if (speed >= 81)
		{
			ticketType = 2; // Big ticket
		}
	}

	// Output the result based on the ticket type
	if (ticketType == 0)
	{
		cout << "No Ticket!" << endl;
	}
	else if (ticketType == 1)
	{
		cout << "Small Ticket!" << endl;
	}
	else if (ticketType == 2)
	{
		cout << "Big Ticket!" << endl;
	}

	return 0;
}
