#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std;

int main()
{
    const double PI = acos(-1.0);
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(10) << "atan(x)" << "   |"
        << setw(7) << "S" << "      |"
        << setw(5) << "n" << "   |"
        << endl;
    cout << "-------------------------------------------------" << endl;


    x = xp;


    while (x <= xk)
    {
        S = PI / 2.0;              // вираз залежить від умови завдання варіанту 
        a = -1 / x;           // вираз залежить від умови завдання варіанту 
        n = 0;
        do {
            S += a;
            a = a * (-1.0 * (2 * n + 1) / ((2 * n + 3) * x * x));
            n++;
            
        } while (abs(a) >= eps);

        cout << "|" << setw(7) << setprecision(2) << x << "   |"
            << setw(10) << setprecision(5) << atan(x) << "   |"
            << setw(10) << setprecision(5) << S << "   |"
            << setw(5) << n << "   |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;

    return 0;
}
