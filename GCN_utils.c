 #include "GCN_utils.h"
#include <math.h>
#include <string.h>
const double r_km=6371.0000;
const double pi=M_PI;
const double d2r=pi/180;
const double r2d=180/pi;


double dec_rad(double DEC){
	return DEC*d2r;
}
 double rad_dec(double RAD){
	return RAD*r2d;
}
double dms_dec(DMS dms){
	double dec= dms.DEG;
	double min=dms.MIN;
	return dec+min/60+dms.SEC/3600;
}
double dms_rad(DMS dms){
	return dms_dec(dms)*d2r;
}
DMS dec_dms(double DEC){
	double tmp1;
	double tmp2;
	double deg;
	double min;
	DMS dms;
	deg=modf(DEC,&tmp1);
	min=modf((tmp1*60),&tmp2);
	dms.SEC=tmp2*60;
	dms.MIN=min;
	dms.DEG=deg;
	return dms ;
}
DMS rad_dms(double RAD){
	return dec_dms(rad_dec(RAD));
}

/**************arc to dst***************/

double nm_rad(double NM){
	return((180*60)/pi)*NM;
}
double rad_nm(double RAD){
	return (pi/(180*60))*RAD;
}
double rad_km(double RAD){
	return r_km*RAD;
}
double km_rad(double KM){
	return KM/r_km;
}
/****************dir to sign***************/
double dir_sign(char *DIR,double DBL){
	double SGN;
	if(strcmp(DIR,"N")==0||strcmp(DIR,"E")==0){
		SGN=0.1;
	}else if (strcmp(DIR,"S")==0||strcmp(DIR,"W")==0){
		SGN=-0.1;
	}
	return copysign(DBL,SGN);
}
