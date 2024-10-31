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
	{
		string literal;
		cout << "Enter a string or Q to quit: ";
		getline(cin, literal);
		int numOfWords = 0;
		for (int i = 1; i < literal.length(); i++)
		{
			if (literal[i] == ' ')
			{
				numOfWords++;
			}
		}
		cout << "Word count: " << numOfWords + 1 << endl;
	}
}

int countWords(string literal)
{
	int numWords = 0;
	return numWords;
}