/*
Create a void function named printNTimes. This function should take two arguments:

A string message.
An integer n.
The function should print the message to the console n times. Use a for loop to repeat the printing.

In the main function, call printNTimes with the inputs message and the input n
*/

#include <iostream>
#include <string>

void	printNTimes(std::string message, int n)
{
    // Write you code here
	for (int i = 0; i < n; i++)
	{
		std::cout << message << std::endl;
	}
	return ;
}

int main() {
	std::string msg;
	int n;
	std::getline(std::cin, msg); 
	std::cin >> n;

	printNTimes(msg, n);
	return (0);
}
