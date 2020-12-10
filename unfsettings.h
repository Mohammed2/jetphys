#ifndef UFSTNGS
#define UFSTNGS

namespace uf {

  // Time depended JES scaling
  constexpr bool dojes = true;
  
  // Use custom MC for generating resolution matrix
  constexpr bool usecustom = false;
  
  // Use output-MC-1 instead of MC-2b (or NLOxNP) in dagostini.C
  constexpr bool dagfile1 = false;

  // Do ECAL prefire correction for 2016 and 2017 data (eta 2.0-2.5 and 2.5-3.0)
  constexpr bool doECALprefire = true;
  
  // pT limits for unfolding
  constexpr double ptminreco = 28;
  constexpr double ptmingen = 15;
  constexpr double ptminnlo = 32;   // Range of the nlo curve
  constexpr double fitptmin = 15; // Min pT used for fit

  constexpr double xmin = 15;
  constexpr double xmax = 4037;

}

#endif
