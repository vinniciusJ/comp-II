//
// Created by vinniciusj on 15/08/23.
//

#ifndef RECURSION_FIBONACCI_H
#define RECURSION_FIBONACCI_H

long fibonacci_recursive(int n){
    if(n == 0 || n == 1)
        return n;

    return fibonacci_recursive(n - 2) + fibonacci_recursive(n - 1);
}

long fibonacci_iterative(int n){
    long previous = 0, current = 1, next = 1;

    for(int i = 1; i < n; i++){
        next = previous + current;

        previous = current;
        current = next;
    }

    return current;
}

long fibonacci_array(int number){
    long array[100];

    array[0] = 0;
    array[1] = 1;

    for(int i = 2; i <= number; i++){
        array[i] = array[i - 1] + array[i - 2];
    }

    return array[number];
}

#endif //RECURSION_FIBONACCI_H
