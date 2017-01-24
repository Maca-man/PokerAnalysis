#include <cmath>
#include <iostream>
#include <iomanip> 

using namespace std;

double expected_Value(double winPercent, double potSize,double betSize){
    double WinAmount=potSize+betSize;
    
    return (winPercent/100)*WinAmount+(1-(winPercent/100))*(betSize);
}


