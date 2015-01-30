#ifndef KMC_PAR_INCLUDED
#define KMC_PAR_INCLUDED

const char   par_ltc[4]=		"BCC";

const int    par_nx=                      100;
const int    par_ny=                      100;
const int    par_nz=                      100;

const double par_compA=                  0.97; // composition of A atoms
const int    par_nV=                        1;

const double par_tend=                   1e13; 	// toal time (s)
const double par_tstep=                   100; 	// toal timestep (give a minus step to ignore this quiterior to end the simulation)
const int    par_confts=                  1e7;	// timestep that output a conf file for restart later

const char   par_hisname[20]=       "history";

// Ising model energy calculation parameters
const double par_temp=                       773.0; // 500c
const double par_beta= 1.0/par_temp/8.617332478e-5; // 1/kbT, units: eV, K

const double par_muA=			   6.1e+12; // units: s^-1 
const double par_muB=			   6.1e+12; // units: s^-1 

const double par_emA=				 0;
const double par_emB=				 0;

const double par_consk1=                         0;
const double par_consj1=                  -0.02366;
const double par_consu1=                  -0.02366;
const double par_consk2=                         0;
const double par_consj2=                 -0.009985;
const double par_consu2=                 -0.009985;

const bool par_isrestart=		     false;

// Bond-formulation parameters
// 	e1AV= e1VA= 0.04732
// 	e1AB= e1BA= 0.04732
// 	e2AV= e2VA= 0.01997
// 	e2AB= e2BA= 0.01997
// trapping number: solute atom trapping and intersitial trapping							 
// 	const int par_trNsol= 3; // trapping number by solute atoms
// 	const int par_trNint= 3; // trapping number by interstitials
#endif // KMC_PAR_INCLUDED