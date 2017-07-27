#include "pressureDrop.h"
#include <iostream>

int main()
{
    pressureDrop dp(1.0,0.01,1e7,300,1e-3,0.1);
    
    dp.Hessen_method();
    
    std::cout << dp.get_pressure_drop() << std::endl;
    
    return 0;
}