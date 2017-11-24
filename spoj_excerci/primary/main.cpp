/* PRIME_T - Prime numbers (C++)
 * Check out which of the given numbers are prime numbers
 *
 * INPUT:
 * n - number of tests, n < 10000
 * In the folowing lines n numbers in range <1,10000>
 *
 * OUTPUT:
 * For each number "YES" when the tested number is prime number, otherwise "NO"
*/
#include <iostream>
#include <cmath>
#include <algorithm>

void erastotenes(bool * primes, int arr_size){
    for(int i=0 ; i<arr_size ; ++i)
        primes[i] = true;
    for(int i = 2 ; i<=sqrt(arr_size+1) ; ++i){
        if(primes[i-2]){
            int multi = 2;
            while(multi*i<=arr_size+1){
                primes[multi*i-2] = false;
                ++multi;
            }
        }
    }
}


int main(void){
    int n;
    std::cin >> n;
    n = (n<100000)? n:100000;
    int test_numbers[n];
    for(int i=0 ; i<n ; ++i) {
        std::cin >> test_numbers[i];
    }
    int max_value = *std::max_element(test_numbers,test_numbers+n);
    bool primes[max_value-1];
    erastotenes(primes,max_value-1);

    for(int i=0 ; i<n ; ++i){
        if(test_numbers[i]<2)
            std::cout << "NO\n";
        else if(primes[(test_numbers[i])-2])
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}

/* RESULT
 * Time: 0.03
 * Memory: 2.9M
 */