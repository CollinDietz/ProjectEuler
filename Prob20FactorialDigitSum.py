#n! means n × (n − 1) × ... × 3 × 2 × 1
#
#For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
#and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
#
#Find the sum of the digits in the number 100!
#
#https://projecteuler.net/problem=20

def facDigitSum(n):
    # determines the sum of the digits of n!
    factorial = 1  # holds the value of n!
    # multiplies by all the numbers from 1 to n
    for i in range(1, n):
        factorial *= i

    factorial = str(factorial)  # convert to string to iterate over digits
    facSum = 0  # sum of the digits of fac i.e n!
    # sums up every digit in fac
    for i in range(len(factorial)):
        facSum += int(factorial[i])

    # print answer
    print(facSum)
    
facDigitSum(100)
