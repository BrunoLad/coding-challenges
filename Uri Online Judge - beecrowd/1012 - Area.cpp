#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const double pi = 3.14159;
    double a, b, c;

    cin >> fixed >> setprecision(1) >> a;
    cin >> fixed >> setprecision(1) >> b;
    cin >> fixed >> setprecision(1) >> c;

    cout << fixed << setprecision(3) << "TRIANGULO: " << floor((a * c / 2) * 1000 + 0.5) / 1000 << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << floor((c * c * pi) * 1000 + 0.5) / 1000 << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << floor(((a + b) * c / 2) * 1000 + 0.5) / 1000 << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << floor((b * b) * 1000 + 0.5) / 1000 << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << floor((a * b) * 1000 + 0.5) / 1000 << endl;

    return 0;
}