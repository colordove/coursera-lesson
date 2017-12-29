//
//  if.cpp
//  coursera
//
//  Created by Jian Hu on 27/12/2017.
//  Copyright © 2017 Jian Hu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int x = 0, y = 0;
    cout << "Please input x and y: " << endl;
    cin >> x >> y;
    if (x > y) {
        cout << "Max number is:" << x << endl;
    } else {
        cout << "Max number is:" << y << endl;
    }
    return 0;
}
