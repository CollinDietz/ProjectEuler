#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<map>

/*
Problem 22
Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, 
begin by sorting it into alphabetical order. 
Then working out the alphabetical value for each name, 
multiply this value by its alphabetical position in the list to obtain a name score.

For example, when the list is sorted into alphabetical order, COLIN, 
which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. 
So, COLIN would obtain a score of 938 × 53 = 49714.

What is the total of all the name scores in the file?

https://projecteuler.net/problem=22
*/

using namespace std;

int main()
{
	
	ifstream in; //file stream for the file provided by Project Euler
	vector<string> names; //container for the names from the file

	//defines a map from char to int to assign numerical values to the alphabet
	map<char, int> alphabet;

	alphabet['A'] = 1;
	alphabet['B'] = 2;
	alphabet['C'] = 3;
	alphabet['D'] = 4;
	alphabet['E'] = 5;
	alphabet['F'] = 6;
	alphabet['G'] = 7;
	alphabet['H'] = 8;
	alphabet['I'] = 9;
	alphabet['J'] = 10;
	alphabet['K'] = 11;
	alphabet['L'] = 12;
	alphabet['M'] = 13;
	alphabet['N'] = 14;
	alphabet['O'] = 15;
	alphabet['P'] = 16;
	alphabet['Q'] = 17;
	alphabet['R'] = 18;
	alphabet['S'] = 19;
	alphabet['T'] = 20;
	alphabet['U'] = 21;
	alphabet['V'] = 22;
	alphabet['W'] = 23;
	alphabet['X'] = 24;
	alphabet['Y'] = 25;
	alphabet['Z'] = 26;

	//open the file and read it in, returning 1 if file opening fails
	in.open("names.txt");
	if (in.fail())
	{
		return 1;
	}
	else
	{
		string input;
		while (getline(in, input))
		{
			names.push_back(input);
		}
	}
	

	in.close();

	//Sort the names alphabetically using selection sort

	for (int i = 0; i < names.size(); i++)
	{
		int minPos = i;
		string temp;

		for (int j = i + 1; j < names.size(); j++)
		{
			if (names[j] < names[minPos])
			{
				minPos = j;
			}
		}
		temp = names[minPos];
		names[minPos] = names[i];
		names[i] = temp;
	}

	long int sum = 0; //sum of the individual name scores

	for (int i = 0; i < names.size(); i++)
	{
		int nameSum = 0; // sum of the score of an individual name
		string current = names[i].c_str(); //grab the next name to get a score from
		//sum up the numerical value of each letter in the name, gotten from the map
		for (int j = 0; j < current.length(); j++)
		{
			nameSum += alphabet[current[j]];
		}
		//multiply the sum of the name by its posistion in the list
		nameSum *= i + 1;
		//and add to the overall sum
		sum += nameSum;
	}
	//output the answer
	cout << sum << endl;
	system("pause");
	return 0;
}
