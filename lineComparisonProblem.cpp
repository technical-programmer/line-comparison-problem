#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Welcome to the Line Comparison problem" << endl;

    double x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "Enter coordinates of the first point (x1, y1) of the first line: ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of the second point (x2, y2) of the first line: ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of the first point (x3, y3) of the second line: ";
    cin >> x3 >> y3;

    cout << "Enter coordinates of the second point (x4, y4) of the second line: ";
    cin >> x4 >> y4;

    double length1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double length2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));

    double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "The length of the line is: " << length << endl;

    if (length1 == length2)
        cout << "The lines are equal" << endl;
    else
        cout << "The lines are not equal" << endl;

    return 0;
}
