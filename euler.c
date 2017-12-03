#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int problem_one(int max)
{
    int sum = 0;
    for(int i = 0; i < max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int problem_two(int n)
{
    int sum = 0, val = 0, i = 0;
    while (val < n) {
        val = fibonacci(i);
        if (val % 2 == 0)
            sum += val;
        i++;
    }
    return sum;
}

long problem_three(long n)
{
    // Iterate from value - 1
    for (long i = n - 1; i > 0; i--) {
        // See if it is a factor of the value
        if (n % i == 0) {
            // See if factor is prime
            if (is_prime(i))
                return i;
        }
    }
    return n;
}

int problem_four(int number_digits)
{
    int min, max, ans;
    char* c_min;
    char* c_max;
    char* c_ans;

    // Create our arrays
    c_min = (char *)malloc((sizeof(char) * number_digits) + 1);
    c_max = (char *)malloc((sizeof(char) * number_digits) + 1);

    // Initialize values
    c_min[0] = '1';
    c_max[0] = '9';
    for (int i = 1; i < number_digits; i++) {
        c_min[i] = '0';
        c_max[i] = '9';
    }
    c_min[number_digits + 1] = '\0';
    c_max[number_digits + 1] = '\0';

    // Get range in integer form
    min = atoi(c_min);
    max = atoi(c_max);

    // Assign memory for result
    c_ans = (char *)malloc(sizeof(char) * (max * max));

    // Iterate from max downward multiplying
    for (int i = max; i > min; i--) {
        for (int j = max; j > min; j--) {
            ans = i * j;
            sprintf(c_ans, "%d", ans);
            if (is_palindrome(c_ans)) {
                free(c_min);
                free(c_max);
                free(c_ans);
                return ans;
            }
        }
    }
    free(c_min);
    free(c_max);
    free(c_ans);
    return ans;
}