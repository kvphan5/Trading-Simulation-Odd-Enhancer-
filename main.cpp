#include <iostream>
using namespace std;

void compute(int m, int ri, int tr, int re, int ti, int a);

int main() {
  int moveStrength, riskReward, trend, retracement, timeAtLevel, arrival;
  cout << "ODD ENHANCERS V1.0 - WhiteFish\n";
  cout << "Strength of the Move (Max 2): ";
  cin >> moveStrength;
  cout << "Reward to Risk Ratio (Max 2): ";
  cin >> riskReward;
  cout << "Big picture of trend (Max 2): ";
  cin >> trend;
  cout << "Number of Retracements / Tests (Max 2): ";
  cin >> retracement;
  cout << "Time at level (Max 1): ";
  cin >> timeAtLevel;
  cout << "Arrival (Max 1): ";
  cin >> arrival;
  compute(moveStrength, riskReward, trend, retracement, timeAtLevel, arrival);
}

void compute(int m, int ri, int tr, int re, int ti, int a){
    int aux = m + ri + tr + re + ti + a;
    cout << "Total Score: " << aux << endl;
    if(aux > 9){
        cout << "High Probability Trade\n";
    }
    if(aux == 8){
        cout << "Confirmation Trade\n";
    }
    else if(aux < 8) cout << "Low Probability Trade\n";
}

