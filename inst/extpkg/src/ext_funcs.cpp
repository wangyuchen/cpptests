// [[Rcpp::depends(cpptests)]]

#include <cpptests.h>

//' @export
// [[Rcpp::export]]
double pmvnorm2() {
  return cpptests::exp_func() * 2;
}

