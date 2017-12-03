
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int is_prime(long n)
{
    // From 2 to n - 1 see if the number is divisible
    for (long i = 2; i < n - 1; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int is_palindrome(const char *word)
{
    int begin, end, length = 0;

    while (word[length] != '\0')
        length++;
    end = length - 1;

    for (begin = 0; begin < length; begin++) {
        if (word[begin] != word[end])
            return 0;
        end--;
    }
    return 1;
}