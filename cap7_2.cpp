#include <iostream>
#include <math.h>

using namespace std;

bool prime(int n) {
	for (int i = 2; i < n; i++) {
		/* code */
		if (n%i == 0) {
			/* code */
			return false;
		}
	}
	return true;
}

int suma_fin(int n)
{
	// Print the number of 2s that divide n
	int regreso = 0;
	while (n%2 == 0)
	{
		regreso += 2;
		n = n/2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		// While i divides n, print i and divide n
		while (n%i == 0)
		{
			regreso += i;
			n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		regreso += n;

	return regreso;
}

int main() {
	/* code */
	for (int j = 3; j <= 1000; j++) {
		/* code */
		if (!prime(j)) {
			/* code */
			int suma_fac = suma_fin(j);
			if (prime(suma_fac)) {
				/* code */
				std::cout << j << " su suma es " << suma_fac << '\n';
			}
		}
	}
	return 0;
}
