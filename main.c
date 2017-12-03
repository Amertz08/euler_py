#include <assert.h>
#include <stdio.h>

#include "euler.h"
#include "helpers.h"

int main() {

    long ans;

    ans = problem_one(10);
    assert(ans == 23);
    printf("Problem one: %d\n", problem_one(1000));

    ans = problem_two(89);
    assert(ans == 44);
    printf("Problem two: %d\n", problem_two(4000000));

    // test is_prime
    assert(is_prime(29));

    ans = problem_three(13195);
    assert(ans == 29);
//    printf("Problem three: %ld\n", problem_three(600851475143));
    printf("Problem three: %ld\n", problem_three(13195));

    assert(is_palindrome("sas"));
    assert(!is_palindrome("not"));
    assert(problem_four(2) == 9009);
    printf("Problem four: %d\n", problem_four(3));
    return 0;
}