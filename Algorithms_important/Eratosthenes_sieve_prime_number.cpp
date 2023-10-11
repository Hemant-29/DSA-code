#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
#include <cmath>
using namespace std;

// We use the "SIEVE OF ERATOSTHENES" approch to solve this problem

long long countPrimes(long long n)
{
    vector<bool> prime(n, true);
    // This array "prime" is a Sieve, or a filter
    //  which tells which index number is prime(marked with 1)
    //  and which is non prime(marked with 0)
    long long primeCount = 0;

    // set elements 0 and 1 to false
    prime[0] = prime[1] = false;

    // Outer loop to travel through - numbers whose multiples are to be found
    for (long long i = 2; (i * i) <= n; i++)
    {
        if (prime[i] == true)
        { // find multiples only if the cuurent number(i) is prime
            long long j = i * i;
            // starting from j = 2i, set 3i, 4i, 5i, 6i... all as non prime

            // inner loop to find multiples of the numbers
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }

    // counting all the primes in the list
    for (int item : prime)
    {
        if (item)
            primeCount++;
    }
    return primeCount;
}

int main()
{
    long long n = 20;
    cout << "\ntotal primes till " << n << " are: " << countPrimes(n) << endl;
    // answer is 8

    return 0;
}