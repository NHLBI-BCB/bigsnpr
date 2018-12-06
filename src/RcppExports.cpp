// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// r2_bgen
NumericVector r2_bgen(std::string filename, NumericVector offsets, LogicalVector use_ind, NumericVector decode, NumericVector y);
RcppExport SEXP _bigsnpr_r2_bgen(SEXP filenameSEXP, SEXP offsetsSEXP, SEXP use_indSEXP, SEXP decodeSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offsets(offsetsSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type use_ind(use_indSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type decode(decodeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(r2_bgen(filename, offsets, use_ind, decode, y));
    return rcpp_result_gen;
END_RCPP
}
// replaceSNP
void replaceSNP(Environment BM, Environment BM2, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigsnpr_replaceSNP(SEXP BMSEXP, SEXP BM2SEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM2(BM2SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    replaceSNP(BM, BM2, rowInd, colInd);
    return R_NilValue;
END_RCPP
}
// corMat
SEXP corMat(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, int size, const NumericVector& thr);
RcppExport SEXP _bigsnpr_corMat(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(corMat(BM, rowInd, colInd, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// linRegPcadapt_cpp
NumericMatrix linRegPcadapt_cpp(Environment BM, const arma::mat& U, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigsnpr_linRegPcadapt_cpp(SEXP BMSEXP, SEXP USEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(linRegPcadapt_cpp(BM, U, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// clumping
LogicalVector clumping(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, const IntegerVector& ordInd, LogicalVector& remain, const NumericVector& sumX, const NumericVector& denoX, int size, double thr);
RcppExport SEXP _bigsnpr_clumping(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP ordIndSEXP, SEXP remainSEXP, SEXP sumXSEXP, SEXP denoXSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ordInd(ordIndSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type remain(remainSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sumX(sumXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type denoX(denoXSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(clumping(BM, rowInd, colInd, ordInd, remain, sumX, denoX, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// clumping2
LogicalVector clumping2(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, const IntegerVector& ordInd, LogicalVector& remain, const IntegerVector& pos, const NumericVector& sumX, const NumericVector& denoX, int size, double thr);
RcppExport SEXP _bigsnpr_clumping2(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP ordIndSEXP, SEXP remainSEXP, SEXP posSEXP, SEXP sumXSEXP, SEXP denoXSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ordInd(ordIndSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type remain(remainSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type pos(posSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sumX(sumXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type denoX(denoXSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(clumping2(BM, rowInd, colInd, ordInd, remain, pos, sumX, denoX, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// pruning
LogicalVector& pruning(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, LogicalVector& keep, const NumericVector& mafX, const NumericVector& sumX, const NumericVector& denoX, int size, double thr);
RcppExport SEXP _bigsnpr_pruning(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP keepSEXP, SEXP mafXSEXP, SEXP sumXSEXP, SEXP denoXSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type keep(keepSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mafX(mafXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sumX(sumXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type denoX(denoXSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(pruning(BM, rowInd, colInd, keep, mafX, sumX, denoX, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// pruning2
LogicalVector& pruning2(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, LogicalVector& keep, const IntegerVector& pos, const NumericVector& mafX, const NumericVector& sumX, const NumericVector& denoX, int size, double thr);
RcppExport SEXP _bigsnpr_pruning2(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP keepSEXP, SEXP posSEXP, SEXP mafXSEXP, SEXP sumXSEXP, SEXP denoXSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type keep(keepSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type pos(posSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mafX(mafXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sumX(sumXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type denoX(denoXSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(pruning2(BM, rowInd, colInd, keep, pos, mafX, sumX, denoX, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// read_bgen
CharacterVector read_bgen(std::string filename, NumericVector offsets, Environment BM, IntegerVector ind_row, IntegerVector ind_col, RawVector decode);
RcppExport SEXP _bigsnpr_read_bgen(SEXP filenameSEXP, SEXP offsetsSEXP, SEXP BMSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP, SEXP decodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offsets(offsetsSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< RawVector >::type decode(decodeSEXP);
    rcpp_result_gen = Rcpp::wrap(read_bgen(filename, offsets, BM, ind_row, ind_col, decode));
    return rcpp_result_gen;
END_RCPP
}
// readbina
bool readbina(const char * filename, Environment BM, const arma::Mat<unsigned char>& tab);
RcppExport SEXP _bigsnpr_readbina(SEXP filenameSEXP, SEXP BMSEXP, SEXP tabSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const arma::Mat<unsigned char>& >::type tab(tabSEXP);
    rcpp_result_gen = Rcpp::wrap(readbina(filename, BM, tab));
    return rcpp_result_gen;
END_RCPP
}
// writebina
void writebina(const char * filename, Environment BM, const RawVector& tab, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigsnpr_writebina(SEXP filenameSEXP, SEXP BMSEXP, SEXP tabSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const RawVector& >::type tab(tabSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    writebina(filename, BM, tab, rowInd, colInd);
    return R_NilValue;
END_RCPP
}
// testWrite
void testWrite(const RawVector& v, const char * filename);
RcppExport SEXP _bigsnpr_testWrite(SEXP vSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawVector& >::type v(vSEXP);
    Rcpp::traits::input_parameter< const char * >::type filename(filenameSEXP);
    testWrite(v, filename);
    return R_NilValue;
END_RCPP
}
// roll_mean
NumericVector roll_mean(const NumericVector& x, const NumericVector& w);
RcppExport SEXP _bigsnpr_roll_mean(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_mean(x, w));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bigsnpr_r2_bgen", (DL_FUNC) &_bigsnpr_r2_bgen, 5},
    {"_bigsnpr_replaceSNP", (DL_FUNC) &_bigsnpr_replaceSNP, 4},
    {"_bigsnpr_corMat", (DL_FUNC) &_bigsnpr_corMat, 5},
    {"_bigsnpr_linRegPcadapt_cpp", (DL_FUNC) &_bigsnpr_linRegPcadapt_cpp, 4},
    {"_bigsnpr_clumping", (DL_FUNC) &_bigsnpr_clumping, 9},
    {"_bigsnpr_clumping2", (DL_FUNC) &_bigsnpr_clumping2, 10},
    {"_bigsnpr_pruning", (DL_FUNC) &_bigsnpr_pruning, 9},
    {"_bigsnpr_pruning2", (DL_FUNC) &_bigsnpr_pruning2, 10},
    {"_bigsnpr_read_bgen", (DL_FUNC) &_bigsnpr_read_bgen, 6},
    {"_bigsnpr_readbina", (DL_FUNC) &_bigsnpr_readbina, 3},
    {"_bigsnpr_writebina", (DL_FUNC) &_bigsnpr_writebina, 5},
    {"_bigsnpr_testWrite", (DL_FUNC) &_bigsnpr_testWrite, 2},
    {"_bigsnpr_roll_mean", (DL_FUNC) &_bigsnpr_roll_mean, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigsnpr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
