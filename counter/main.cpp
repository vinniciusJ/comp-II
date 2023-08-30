#include <iostream>
#include "counter.h"

using namespace std;

int main() {

    for(Counter * counter = new Counter(0); counter->getValue() < 5; counter->next()){
        cout << counter->getValue() << endl;
    }

    return 0;
}
