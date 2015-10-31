#include <Rcpp.h>
#include "internals.h"

using namespace Rcpp;

// An exported function on both levels
// [[Rcpp::interfaces(r, cpp)]]

// If export to R level, it will need documentation too!

//' @export
// [[Rcpp::export]]
double exp_func() {
  NumericVector lls(2, 0.0);
  NumericVector uls(2, 1.0);
  NumericVector mu(2, 0.0);
  NumericMatrix sigma(2, 2);

  sigma(0, 0) = 5;
  sigma(1, 1) = 2;


  return pmvnorm(lls, uls, mu, sigma);
}
