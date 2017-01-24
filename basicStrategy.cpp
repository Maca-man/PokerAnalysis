#include <cmath>
#include <iostream>
#include <iomanip> 
#include "basicStrategy.h"

using namespace std;

int main(void){

    double EV,betSize,potSize,winPercentage;
    cout<<"Pot Size : $";
    cin >>potSize;
    cout<<endl<<"bet Size : $";
    cin>>betSize;
    cout<<endl<<"Win Percentage : %";
    cin>>winPercentage;

    EV=expected_Value(winPercentage,potSize,betSize);
    cout << "Expected Value = $" << EV <<endl;
}