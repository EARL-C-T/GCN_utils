#ifndef GCN_UTILS_H
#define GCN_UTILS_H
#include <string.h>
#include <math.h>

extern const double r_km;
extern const double pi;
extern const double d2r;
extern const double r2d;




typedef struct degreeMinSec{
	int DEG;
	int MIN;
	double SEC;
}DMS;//degree 

double dec_rad(double DEC);//decimal deg to radians

double rad_dec(double RAD);//radians to decimal deg

double dms_dec(DMS dms);//dms to decimal deg

double dms_rad(DMS dms);//dms to radian

DMS dec_dms(double DEC);//decimal deg to dms

DMS rad_dms(double RAD);//radian to dms


/**************arc to dst***************/

double nm_rad(double NM);// nautical miles to radians

double rad_nm(double RAD);//radians to nautical miles

double rad_km(double RAD);//radians to kilomiters

double km_rad(double KM);//kilomiters to radians 
/****************dir to sign***************/
double dir_sign(char *DIR,double DBL);/*DBL can either be decimal degrees or raidians DIR is direction one of "N","E"returns  positive or "S","W"returns negitive */
#endif
