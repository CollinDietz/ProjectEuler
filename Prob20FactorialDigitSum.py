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
