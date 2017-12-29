//
//  float.cpp
//  coursera
//
//  Created by Jian Hu on 27/12/2017.
//  Copyright © 2017 Jian Hu. All rights reserved.
//


    float a = 0, b = 0, temp = 0;
    cout << "Please input a and b:" << endl;
    cin >> a >> b;
    cout << "a = " << a << "b = " << b << endl;
    temp = a; a = b; b = temp;
    cout << "a = " << a << "b = " << b << endl;
    return 0;
