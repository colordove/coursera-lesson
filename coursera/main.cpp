//
//  main.cpp
//  coursera
//
//  Created by Jian Hu on 27/12/2017.
//  Copyright © 2017 Jian Hu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "please input date of appointment" << endl;
    cin >> day;
    if (day == 1 || day == 3 || day == 5) {
        cout << "No" << endl;
    } else if (day == 2 || day == 4 || day == 6) {
        cout << "Yes" << endl;
    }
    return 0;
}

