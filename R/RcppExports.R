# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

blockpfGaussianOpt_impl <- function(data, part, lag) {
    .Call('RcppSMC_blockpfGaussianOpt_impl', PACKAGE = 'RcppSMC', data, part, lag)
}

pfLineartBS_impl <- function(data, part, usef, fun) {
    .Call('RcppSMC_pfLineartBS_impl', PACKAGE = 'RcppSMC', data, part, usef, fun)
}

pfNonlinBS_impl <- function(data, part) {
    .Call('RcppSMC_pfNonlinBS_impl', PACKAGE = 'RcppSMC', data, part)
}
