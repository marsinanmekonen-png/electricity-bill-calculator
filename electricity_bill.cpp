#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int TIER1_LIMIT = 50;
    const double TIER1_RATE = 1.50, TIER2_RATE = 2.00, SERVICE_CHARGE = 10.00;

    int units;
    double energyCharge, totalBill;

    cout << "Enter electricity units (kWh): ";
    cin >> units;

    energyCharge = (units <= TIER1_LIMIT) ? (units * TIER1_RATE) : ((TIER1_LIMIT * TIER1_RATE) + ((units - TIER1_LIMIT) * TIER2_RATE));
    totalBill = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energyCharge << endl;
    cout << "Service charge: " << SERVICE_CHARGE << endl;
    cout << "Total bill: " << totalBill << endl;

    return 0;
}
