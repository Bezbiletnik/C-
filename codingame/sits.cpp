#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int rb;
    int cb;
    cin >> rb >> cb; cin.ignore();
    int re;
    int ce;
    cin >> re >> ce; cin.ignore();

    int rj,cj,mr,mc;
    (rb < re) ? rj = re - rb : rj = rb - re;
    (cb < ce) ? cj = ce - cb : cj = cb - ce;
    (rb < re) ? mr = rb : mr = re;
    (cb < ce) ? mc = cb : mc = ce;
    cout << rj/2+mr << " " << cj/2+mc << endl;
}
