//  find-array-index.cpp
//  coursera
//
//  Created by Jian Hu on 4/5/18.
//  Copyright © 2018 Jian Hu. All rights reserved.

#include <stdio.h>
#include <iostream>
using namespace std;

int findArrayIndex() {
    int n;
    cout << "输入x的个数" << endl;
    cin >> n;
    int x[n];
    cout << "输入x个数" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        if (x[i] == i) {
            cout << x[i] << endl;
            return 0;
        } else if (i == n - 1 && x[n - 1] != n) {
            cout << "N" << endl;
        }
    }
    return 0;
}


