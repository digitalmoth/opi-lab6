#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int min, max;
    float x, h, y, ab;
    cout << "enter min, max, h and ab" << endl;
    cin >> min >> max >> h >> ab;
    x = min;
    do {
        y = ab + sin(x * x) - x * 0.5;
        cout << setw(7) << x << setw(7) << y << endl;
        x++;
    } while (x <= max + h / 2);
}

