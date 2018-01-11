//
//  highest-grade.cpp
//  coursera
//
//  Created by Jian Hu on 10/01/2018.
//  Copyright © 2018 Jian Hu. All rights reserved.
//

#include <stdio.h>
using namespace std;
int main() {
    int ary[5];
    int people;
    cout << "请输入参加考试的人数" << endl;
    cin >> people;
    cout << "请输入这些人的成绩" << endl;
    for (int i = 0; i < people; i++) {
        cin >> ary[i];
    }
    //    bubble sorting
    for (int i = 0; i < people; i++) {
        for (int j = i + 1; j < people; j++) {
            int temp;
            if (ary[i] < ary[j]) {
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
    //    print
    for (int i = 0; i < people; i++) {
        cout << ary[i] << endl;
    }
    cout << "最高的成绩是:" << ary[0] << endl;
}
