#include <cmath>
#include <iostream>
#include <iomanip> 

using namespace std;
/**
Expected Value is the probability-weighted average of possible results
EV = Win% * WinAmt - Lose% * LoseAmt
*/
double expected_Value(double winPercent, double potSize,double betAmount){
    double WinAmount=potSize+betAmount;
    
    return (winPercent/100)*WinAmount+(1-(winPercent/100))*(betAmount);
}
/**
Pot Odds are the relationship of the call amount to the size of the pot

*/
double Pot_Odds(double betAmount, double potSize ){
    return betAmount/(betAmount+betAmount+potSize);

}


