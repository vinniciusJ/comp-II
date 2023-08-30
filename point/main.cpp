#include <iostream>
#include "point.h"

using namespace std;

int main() {
    auto * stPoint = new Point();
    auto * ndPoint = new Point(10, 0);

    Point * auxPoint = nullptr;

    stPoint->move(5, -9);
    cout << "stPoint = " << stPoint->toString() << endl;

    cout << "Distance between st point and nd point is " << stPoint->getDistance(ndPoint) << endl;
    cout << "Is point semantic equal? R: " << stPoint->equals() << endl;

    auxPoint = ndPoint->clone();

    cout << "ndPoint = " << ndPoint->toString() << endl;
    cout << "auxPoint = " << auxPoint->toString() << " (copy of ndPoint)" << endl;

    delete stPoint;
    delete ndPoint;
    delete auxPoint;

    return 0;
}
