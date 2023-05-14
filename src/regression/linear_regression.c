#include <linear_regression.h>
#include <central_tendency.h>

LinearRegressionModel LinearRegressionFit(real_t *X, real_t *Y, size_t size)
{
	LinearRegressionModel ret;
	ret.w1 = 0;
	real_t X_mean = getMean(X, size);
	real_t Y_mean = getMean(Y, size);
	for (size_t i = 0 ; i < size ; i++)
		ret.w1 += (X[i] - X_mean) * (Y[i] - Y_mean);
	real_t t0 = 0, t1;
	for (size_t i = 0 ; i < size ; i++) {
		t1 = X[i] - X_mean;
		t0 += t1 * t1;
	}
	ret.w1 /= t0;
	ret.w0 = Y_mean - ret.w1 * X_mean;
	return ret;
}

real_t LinearRegressionPredict(LinearRegressionModel model, real_t x)
{
	return model.w1 * x + model.w0;
}
