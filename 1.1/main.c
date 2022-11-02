#include <stdio.h>
#include <stdint.h>

//Euclid's algorithm
void main() {
	uint64_t one, two;
	
	printf("Enter two numbers: ");
	scanf("%llu %llu", &one, &two);
	
	uint64_t m = one;
	uint64_t n = two;
	uint64_t r;
	while ((r = (m % n)) != 0) {
		m = n;
		n = r;
	}

	printf("GCD(%llu,%llu) = %llu\n", one, two, n);
}
