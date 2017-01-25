#include <cmath>
#include <iostream>
#include <iomanip> 
#include "basicStrategy.h"

using namespace std;

int main(void){
    bool c; //continue
    int outs,N;
    double EV,betAmount,potSize,winPercentage,potOdds,EVzero,impOdds;
    do{

 
    cout<<"Pot Size : $";
    cin >>potSize;
    cout<<endl<<"bet amount : $";
    cin>>betAmount;
    cout<<endl<<"Number or outs : ";
    cin>>outs;
    cout<<endl<<"Number of cards you will see";
    cin>>N;

    winPercentage=exactWin(outs,N);
    EVzero=zeroEV(winPercentage,potSize);
    EV=expected_Value(winPercentage,potSize,betAmount);
    potOdds= Pot_Odds(betAmount,potSize);
    impOdds=impliedOdds(winPercentage,potSize,betAmount);

  
    cout << "Win Percentage : %"<<winPercentage*100<<endl;
    cout << "Expected Value = $" << EV <<endl;
    cout << "Pot Odds = %"<<potOdds*100<<endl;
    cout << "max bet we should call = $"<<EVzero<<endl;
    cout << "Additional bets to break even $"<<impOdds<<"more "<<endl;
    if (winPercentage>potOdds){
    cout<<" You might want to call"<<endl;}
    else{
        cout<<" You might not want to call "<<endl;
    }
    
    



    cout<<"Again? 1=yes 0=no";cin>>c;

    }while(c);//continue?
}