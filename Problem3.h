#pragma once

/* The prime factors of 13195 are 5, 7, 13 and 29.
 *What is the largest prime factor of the number 600851475143 ?.
 */

#include <vector>
#include <set>
#include <cmath>

class Problem3 {
public:


	void solve() {
		printf("%d\n", findLargestPrimeFactor(600851475143));
	}

	int findLargestPrimeFactor(long long num) {

		std::set<long long> primFactors;

		for (long long i = 2; i <= sqrt(num); i++) {			
			bool newPrime = true;
			if (num % i == 0) {
				for (const auto& prime : primFactors) {
					if (i % prime == 0) {
						newPrime = false;
					}
				}
				if (newPrime == true) {
					primFactors.insert(i);
				}
			}
		}

	

		return *primFactors.rbegin();



	}




};