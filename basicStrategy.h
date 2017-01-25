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
    
    return (winPercent/100)*WinAmount-(1-(winPercent/100))*(betAmount);
}
/**
Pot Odds are the relationship of the call amount to the size of the pot
it is call/(pot+bet+call).  decimal form
*/
double Pot_Odds(double betAmount, double potSize ){
    return betAmount/(betAmount+betAmount+potSize);

}
/**
Approximation of win percentage based on Gordon's rule of 2 or 4
*/
double Gordon(int outs, int N){
    double percent=N*2;
    return percent*outs;
}
/**
Approximation of win percentage based on what i think the probability is 
*/
double exactWin(int outs,int N){
    double p;
    float cards=49;
    p=(cards-outs)/cards;
    for (int i=1;i<N;i++){
    p=p*(cards-outs-i)/(cards-i);}
    return 1-p; 
}
/**
Max bet we should call EV=0
*/
double zeroEV(double winPercentage,double potSize){
    return winPercentage*potSize/(2*winPercentage-1);
}


