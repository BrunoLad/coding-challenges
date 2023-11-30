#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float a, b, media;

    cin >> fixed >> setprecision(1) >> a;
    cin >> fixed >> setprecision(1) >> b;

    media = ((a * 3.5) + (b * 7.5)) / 11;

    cout << fixed << setprecision(5) << "MEDIA = " << floor(media * 100000 + 0.5) / 100000 << endl;

    return 0;
}