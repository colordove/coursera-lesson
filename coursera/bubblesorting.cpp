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
    int n, a[1000];
    //    input n numbers
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // bubble sorting, compare two numbers, exchange position
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    // print
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    
    return 0;
}


