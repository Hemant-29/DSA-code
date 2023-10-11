#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
#include <cmath>
using namespace std;

void printVector(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> sieve(long long n)
{
    vector<int> prime(n + 1, true);
    // This array "prime" is a Sieve, or a filter
    vector<int> primeList;
    // PrimeList is the array of all primes upto n

    prime[0] = prime[1] = false;

    for (long long i = 2; (i * i) <= n; i++)
    {
        if (prime[i] == true)
        {
            long long j = i * i;
            // starting from j = 2i, set 3i, 4i, 5i, 6i... all as non prime
            while (j <= n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (prime[i] == 1)
            primeList.push_back(i);
    }
    return primeList;
}

vector<int> segSieve(long l, long r)
{
    vector<int> segment(r - l, 1);

    // base primes is a list of prime numbers upto n,
    //  whose multiples lie in the range (l -> r)
    vector<int> basePrimes = sieve(sqrt(r));

    // switching the multiples of base primes to 0
    for (int basePrime : basePrimes)
    {
        int multiple = 2 * basePrime;
        while (multiple <= r)
        {
            if (multiple >= l)
            {
                segment[multiple - l] = 0;
            }
            multiple += basePrime;
        }
    }
    return segment;
}

int main()
{
    long l = 101;
    long r = 103;
    int count = 0;
    vector<int> segmentedSieve = segSieve(l, r);
    for (int i : segmentedSieve)
    {
        (segmentedSieve[i] == 1) ? count++ : NULL;
        // if the i'th element of the sieve is 1, then increase the prime count
    }

    cout << "\ntotal primes from " << l << " to " << r << " are: " << count << endl;
    // answer is 21

    return 0;
}