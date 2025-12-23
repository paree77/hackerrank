//Problem

/*Given two integers, extract their last digits and print the sum of those digits.

Important Instructions

Do NOT write the entire logic in main().
Write a function int sumLastDigits(int a, int b) and call it from main().
Input Format

Two integers: {a} {b}

Constraints

0 ≤ a, b ≤ 10⁹
Output Format

Single line printing the result as: The sum of last digits is: {res}

Sample Input 0

42 59
Sample Output 0

The sum of last digits is: 11
Sample Input 1

100 9
Sample Output 1

The sum of last digits is: 9*/

//solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int num1, num2;
    int lastDigit1, lastDigit2;
    int sumOfLastDigits;

 
 
    scanf("%d", &num1);


   
    scanf("%d", &num2);

  
    lastDigit1 = num1 % 10;

   
    lastDigit2 = num2 % 10;

  
    sumOfLastDigits = lastDigit1 + lastDigit2;

 
    printf("The sum of last digits is: %d\n", sumOfLastDigits);

    return 0;
}


