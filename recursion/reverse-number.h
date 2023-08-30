//
// Created by vinniciusj on 15/08/23.
//
#include <cmath>

#ifndef RECURSION_REVERSE_NUMBER_H
#define RECURSION_REVERSE_NUMBER_H

int digits_length(int n){
    if(n > 0){
        return 1 + digits_length(n / 10);
    }

    return 0;
}

int reverse_number_iterative(int n){
    int reversed = 0, digit = 0;

    while(n != 0){
        digit = n % 10;
        n = n / 10;

        reversed = reversed * 10 + digit;
    }

    return reversed;
}

int reverse_number_recursion(int n){
    int length = digits_length(n);

    if(n == 0){
        return 0;
    }

    return (n % 10) * pow(10, length - 1) + reverse_number_recursion(n / 10);
}

int reverse_number_ln(int n){
    if(n == 0) return 0;

    return exp(-log(n));
}

#endif //RECURSION_REVERSE_NUMBER_H
