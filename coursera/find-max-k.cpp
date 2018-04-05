//
//  find-max-k.cpp
//  coursera
//
//  Created by Jian Hu on 3/8/18.
//  Copyright © 2018 Jian Hu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int n;
    int k;
    cout << "please input numbers length" << endl;
    cin >> n;
    int number[n];
    cout << "Please input numbers" << endl;
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }
    cout << "please input k" << endl;
    cin >> k;
    // bubble sorting
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (number[j - 1] < number[j]) {
                int temp = number[j];
                number[j] = number[j - 1];
                number[j - 1] = temp;
            }
        }
    }
    cout << number[k - 1] << endl;
}

