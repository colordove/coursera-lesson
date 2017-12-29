//
//  array.cpp
//  coursera
//
//  Created by Jian Hu on 27/12/2017.
//  Copyright © 2017 Jian Hu. All rights reserved.
//

#include <stdio.h>
int main() {
    char ary[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    cout << "字母表中序号为奇数的前五个字母:" << endl;
    for (int i = 0; i < 10; i += 2) {
        cout << ary[i] << endl;
    }
    return 0;
}
