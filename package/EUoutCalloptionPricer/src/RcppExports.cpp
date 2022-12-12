// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// getEuropeanUpOutCallPrice
double getEuropeanUpOutCallPrice(int nInt, double strike, double barrier, double spot, double vol, double r, double expiry, int nReps);
RcppExport SEXP _EUoutCalloptionPricer_getEuropeanUpOutCallPrice(SEXP nIntSEXP, SEXP strikeSEXP, SEXP barrierSEXP, SEXP spotSEXP, SEXP volSEXP, SEXP rSEXP, SEXP expirySEXP, SEXP nRepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nInt(nIntSEXP);
    Rcpp::traits::input_parameter< double >::type strike(strikeSEXP);
    Rcpp::traits::input_parameter< double >::type barrier(barrierSEXP);
    Rcpp::traits::input_parameter< double >::type spot(spotSEXP);
    Rcpp::traits::input_parameter< double >::type vol(volSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type expiry(expirySEXP);
    Rcpp::traits::input_parameter< int >::type nReps(nRepsSEXP);
    rcpp_result_gen = Rcpp::wrap(getEuropeanUpOutCallPrice(nInt, strike, barrier, spot, vol, r, expiry, nReps));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_EUoutCalloptionPricer_getEuropeanUpOutCallPrice", (DL_FUNC) &_EUoutCalloptionPricer_getEuropeanUpOutCallPrice, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_EUoutCalloptionPricer(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
