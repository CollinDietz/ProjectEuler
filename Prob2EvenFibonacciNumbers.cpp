/*
Problem 2:
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

https://projecteuler.net/problem=2
*/

#include<iostream>

using namespace std;

int main()
{
	int sum = 0; //sum of all even fib (fibonacci) numbers
	int previousNum = 1; //number at n-2
	int twoPreviousNum = 0; // number at n-1
	int currentNum = previousNum + twoPreviousNum; //fibonacci number at n is fib(n-1) + fib(n -2)
  
  //while no fibonacci number is greater then 4 million
	while (currentNum <= 4000000)
	{
    //if the number is even
		if (currentNum % 2 == 0)
		{
      //add to the sum
			sum += currentNum;
		}
    //shift numbers back 1 position
		twoPreviousNum = previousNum;
		previousNum = currentNum;
    //recalculate next number by summing two previous fib numbers
		currentNum = twoPreviousNum + previousNum;
	}
  
  //output the answer
	cout << sum << endl;
	return 0;
}
