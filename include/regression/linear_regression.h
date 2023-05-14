#ifndef _LINEAR_REGRESSION_H
#define _LINEAR_REGRESSION_H

#include <updef.h>
#include <stddef.h>

typedef struct {
	real_t w0;
	real_t w1;
} LinearRegressionModel;

LinearRegressionModel LinearRegressionFit(real_t *, real_t *, size_t);
real_t	LinearRegressionPredict(LinearRegressionModel, real_t);

#endif
