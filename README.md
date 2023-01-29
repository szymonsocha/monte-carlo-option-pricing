# monte-carlo-option-pricing
Path-dependent option pricing with Monte Carlo and Rcpp package.

This `Rcpp` package can be used to provide function defined in `C++` which will be responsible for providing valuations of path-dependent option of **European style up-and-out call option** using the Monte Carlo simulation technique.

Input values:
- $S_0$ - price of the underyling at the moment of option pricing
- $K$ - strike price
- $σ$ - annualized volatility rate
- $r$ - annualized risk-free rate
- $t$ - time to maturity
- $b$ - barrier level

The package can be found in the [package directory](https://github.com/szymonsocha/monte-carlo-option-pricing/tree/main/package).

In the [report directory](https://github.com/szymonsocha/monte-carlo-option-pricing/tree/main/report) I show an example of the use of `EUoutCalloptionPricer` package.

The report published on *RPubs* can be found [here](https://rpubs.com/sjimon/monte-carlo-option-pricing).
