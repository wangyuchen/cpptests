#ifndef __internals_h__
#define __internals_h__

// It's ok to use #include in headers, but the header guard is necessary.

#include <Rcpp.h>

// Don't use namespace in headers, only in .cpp files.
// Always use explicit naming in headers.

double pmvnorm(Rcpp::NumericVector lls, Rcpp::NumericVector uls,
               Rcpp::NumericVector mu, Rcpp::NumericMatrix sigma);

#endif
