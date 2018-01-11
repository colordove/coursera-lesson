//
//  separate-int.cpp
//  coursera
//
//  Created by Jian Hu on 11/01/2018.
//  Copyright © 2018 Jian Hu. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int num, hundreds, tens, units;
    cin >> num;
    hundreds = (num - (num % 100)) / 100;
    tens = (num % 100 - (num % 100) / 10) / 10;
    units = num % 100 % 10 / 1;
    cout << hundreds << endl;
    cout << tens << endl;
    cout << units << endl;
}

