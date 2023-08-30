//
// Created by vinniciusj on 15/08/23.
//

#ifndef RECURSION_SUM_H
#define RECURSION_SUM_H

int sum_array(int * array, int length){
    if(length == 0) return 0;

    return array[length] + sum_array(array, length - 1);
}

#endif //RECURSION_SUM_H
