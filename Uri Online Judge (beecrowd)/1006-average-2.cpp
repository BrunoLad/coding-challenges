#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float a, b, c, media;

    cin >> fixed >> setprecision(1) >> a;
    cin >> fixed >> setprecision(1) >> b;
    cin >> fixed >> setprecision(1) >> c;

    media = ((a * 2) + (b * 3) + (c * 5)) / 10;

    cout << fixed << setprecision(1) << "MEDIA = " << floor(media * 10 + 0.5) / 10 << endl;

    return 0;
}