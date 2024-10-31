// File Name:     Lab Problem 8.2
// Author:        William Inkrott
// Date:          10/31/24
// Description:    

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int countWords(string literal);

int main(void)
{
	string literal;
	int numWords;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, literal);
		if (literal == "Q") break;
		numWords = countWords(literal);
		cout << "Word Count: " << numWords + 1 << endl;
	}
	return 0;
}

int countWords(string literal)
{
	int numOfWords = 0;
	for (int i = 1; i < literal.length(); i++)
	{
		if (literal[i] == ' ')
		{
			numOfWords++;
		}
	}
	return numOfWords;
}