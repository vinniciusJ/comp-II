//
// Created by vinniciusj on 29/08/23.
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
private:
    int value;
public:
    int getValue(){
        return value;
    }

    void setValue(int newValue){
        value = newValue;
    }

    void reset(){
        value = 0;
    }

    void next(){
        value++;
    }

    Counter(int initialValue){
        value = initialValue;
    }

    ~Counter(){
        value = 0;
    }
};


#endif //COUNTER_COUNTER_H
