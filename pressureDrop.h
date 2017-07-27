#pragma once

class pressureDrop
{
    public:
        pressureDrop(){}
        ~pressureDrop(){}
        
        /**
            Constructor
            defines a pressureDrop object with different methods 
        */
        pressureDrop
        (
          double,   // length of the pipe (m)
          double,   // diameter of the pipe (m)
          double,   // pressure at the beginning of the pipe (Pa)
          double,   // temperature at the beginning of the pipe (K)
          double,   // density at the beginning of the pipe (kg/m^3)
          double    // mass flow rate (kg/s)
        );
    
        /**
            calculates pressure drop in a straight pipe using Hessen's method
        */
        int Hessen_method
        (
            
        );
        
        double get_pressure_drop(){return pressure_drop;}
        
    private:
    
        double length;
        double diameter;
        double P1;
        double T1;
        double rho1;
        double mfr;  //mass flow rate
        
        double P2;
        double T2;
        double rho2;
        
        double pressure_drop;
};