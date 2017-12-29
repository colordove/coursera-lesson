//
//  riddle.cpp
//  coursera
//
//  Created by Jian Hu on 27/12/2017.
//  Copyright © 2017 Jian Hu. All rights reserved.
//

#include <stdio.h>
int main() {
    char letter = 'G';
    cout << "我是哪个字母?" << endl;
    cin >> letter >>;
    if (letter != 'G') {
        cout << "猜错了" << endl;
    } else {
        cout << "猜对了" << endl;
    }
}
