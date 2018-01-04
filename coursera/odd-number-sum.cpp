//
//  odd-number-sum.cpp
//  coursera
//
//  Created by Jian Hu on 04/01/2018.
//  Copyright © 2018 Jian Hu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int m, n, result = 0;
    cout << "please inputs two numbers (m <= n and n <= 300)" << endl;
    cin >> m >> n;
    while(m <= n) {
        if (m % 2 == 1) {
            result += m;
        }
        m++;
    }
    cout << result << endl;
    return 0;
}
