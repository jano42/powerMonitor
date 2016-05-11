#include "calc.h"

int CALC_rssi(double fvr)
{
    //compute RSSI with full precision
    float rssi = (-0.4049*fvr) + 236.03;
    
    //truncate value to nearest 5%
    return (((int)(rssi + 0.5)) / 5) *5;
}


const float BURDEN_VALUE = 100.0;
const int NB_TURNS = 2800;


double CALC_adcValue2rms(double adcValue)
{
    /*
    double i_secondary_ct3 = adcValue / BURDEN_VALUE;
    return i_secondary_ct3 * NB_TURNS;
     * */
    
    return (adcValue / BURDEN_VALUE) * NB_TURNS * 230.0; 
}