#ifndef _internals_h_
#define _internals_h_

#include <Rcpp.h>

using namespace Rcpp;

double pmvnorm(NumericVector lls, NumericVector uls,
               NumericVector mu, NumericMatrix sigma);

#endif
