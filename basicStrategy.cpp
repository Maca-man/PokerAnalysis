#include <cmath>
#include <iostream>
#include <iomanip> 
#include "basicStrategy.h"

using namespace std;

int main(void){
    bool c; //continue
    do{
    double EV,betAmount,potSize,winPercentage,potOdds;
    cout<<"Pot Size : $";
    cin >>potSize;
    cout<<endl<<"bet amount : $";
    cin>>betAmount;
    cout<<endl<<"Win Percentage : %";
    cin>>winPercentage;

    EV=expected_Value(winPercentage,potSize,betAmount);
    potOdds=Pot_Odds(betAmount,potSize);

    cout << "Expected Value = $" << EV <<endl;
    cout << "Pot Odds = %"<<potOdds<<endl;


    cout<<"Again? 1=yes 0=no";cin>>c;

    }while(c);//continue?
}