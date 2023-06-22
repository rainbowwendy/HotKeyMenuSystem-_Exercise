// HotKeyMenuSystem _Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {

	int Choice;

	while (1) {  
		// The while(1) loop creates an infinite loop, which means the loop will continue indefinitely unless a break statement is encountered. 
		// This is often used for menu systems where the user can make multiple selections.It helps perform optimization
		printf("Hot Key Menu System \n");
		printf("1. Option1\n");
		printf("2. Option2\n");
		printf("3. Option3\n");
		printf("4. Option4\n");
		printf("5. Exit\n");

		printf("Please Select an option ");
		scanf_s("%d", &Choice);

		switch (Choice) 
			// Evaluating the user's choice using a switch statement.
		{
		case 1:
			printf("Red pill 1\n"); 
			// If the user selects Option 1, print "Red pill 1".
			break;
		case 2:
			printf("Blue pill 2\n"); 
			// If the user selects Option 1, print "Red pill 1".
			break;
		case 3:
			printf("Rabbit hole 3\n"); 
			// If the user selects Option 1, print "Red pill 1".
			break;
		case 4:
			printf("Out of the matrix of the matrix 4\n"); 
			// If the user selects Option 4, print "Out of the matrix of the matrix 4".
			break;
		case 5:
			printf("Exit\n"); 
			// If the user selects Option 5, print "Exit" and return from the main function, effectively terminating the program.
			return 0;
		default:
			printf("Invalid input. Try it again.\n"); 
			// If the user enters an invalid choice, print an error message.
			break;
		}
		printf("\n\n"); 
		// Print new lines for spacing before displaying the menu again.
	}
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
