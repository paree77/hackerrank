//Problem

/*Given a 3-digit number ABC, extract and print A, B, and C separately.

Important Instructions

Do NOT write the entire logic in main().
Create a function void split(int n) and call it from main().
Input Format

A single 3-digit integer {ABC}

Constraints

100 ≤ n ≤ 999
Output Format

Single line printing the output as: {A} {B} {C}

Sample Input 0

456
Sample Output 0

4 5 6
Sample Input 1

902
Sample Output 1

9 0 2*/

//solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



  void breakDigits(int num) {
    int first, second, third;

    first  = num / 100;
    second = (num / 10) % 10;
    third  = num % 10;

    printf("%d ",first);
    printf("%d ", second);
    printf("%d ", third);
}

int main() {
    int num;

  
    scanf("%d", &num);

    breakDigits(num); 
    return 0;
}
