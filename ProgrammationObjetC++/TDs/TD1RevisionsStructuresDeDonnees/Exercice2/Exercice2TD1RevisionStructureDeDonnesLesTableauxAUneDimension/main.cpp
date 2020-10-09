#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int NB = 8;
    int memo;
    int tab[NB] = {10, 12, 45, 29, 31, 45, 5, 8};
    int i;
    int y;
    int t;

    for(t = 0 ; t<NB ; t++){
        cout << setw(3) << tab[t] << " | ";
    }
    cout << endl;
    for (i = 0 ; i < NB-1 ; i++) {
        memo = tab[NB-1];
        for (y = 8; y > 0; y--) {
            tab[y] = tab[y-1];
        }
        tab[0] = memo;
        for(t = 0 ; t<NB ; t++){
            cout << setw(3) << tab[t] << " | ";
        }
        cout << endl;
    }

    return 0;
}
