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
    int ary[10];
    cout << "请输入需要排序的整数：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> ary[i];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (ary[i] > ary[j]) {
                int temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
    // print
    for (int i = 0; i < 10; i++) {
        cout << ary[i] << endl;
    }
    return 0;
}


