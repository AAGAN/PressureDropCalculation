#include "pressureDrop.h"
#include <cmath>


pressureDrop::pressureDrop
(
    double Length,
    double Diameter,
    double Start_Pressure,
    double Start_Temperature,
    double Start_Density,
    double MassFlowRate
):
    length(Length),
    diameter(Diameter),
    P1(Start_Pressure),
    T1(Start_Temperature),
    rho1(Start_Density),
    mfr(MassFlowRate)
    {
        
    }

int pressureDrop::Hessen_method
(
    
)
{
    P2 = P1 - 1.0;
    pressure_drop = P1 - P2;
    
    return 0; //return 0 if successful 
}