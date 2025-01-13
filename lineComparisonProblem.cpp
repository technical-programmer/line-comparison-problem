#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Welcome to the Line Comparison problem" << endl;

    double x1, y1, x2, y2;

    cout << "Enter coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "The length of the line is: " << length << endl;

    return 0;
}
