#include <central_tendency.h>
#include <stdlib.h>

real_t getMean(real_t *A, size_t size)
{
	real_t ret = 0;
	for (size_t i = 0 ; i < size ; i++)
		ret += A[i];
	ret /= size;
	return ret;
}

int medianCmp(const void *x, const void *y)
{
	return *(real_t *) x < *(real_t *) y;
}

real_t getMedian(real_t *A, size_t size)
{
	qsort(A, size, sizeof(real_t), medianCmp);
	if (size & 1) return A[size >> 1];
	size >>= 1;
	return (A[size] + A[size - 1]) / 2; 
}

real_t getVariance(real_t *A, size_t size)
{
	real_t ret = 0;
	real_t A_mean = getMean(A, size);
	real_t t0;
	for (size_t i = 0 ; i < size ; i++) {
		t0 = A[i] - A_mean;
		ret += t0 * t0;
	}
	return ret / size;
}
