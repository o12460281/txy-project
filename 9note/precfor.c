/*
    "吸血鬼数字"是指位数为偶数的数字，可以由一对数字相乘而得到，而这对数字各包含乘积的一半位数的数字，其中从最初的数字中选取的数字可以任意排序。以两个0结尾的数字是不允许的，例如，下列数字都是"吸血鬼数字"：
1260 = 21 * 60
1827 = 21 * 87
2187 = 27 * 81
写一个程序，找出4位数的所有吸血鬼数字
                                        */
#include <stdio.h>
#include <stdlib.h>

int get(int v, int index) {
    switch(index) {
    case 0 :
        return v / 1000 % 10;
    case 1 :
        return v / 100 % 10;
    case 2 :
        return v / 10 % 10;
    case 3:
        return v % 10;
    }
}

int main(void) {
    int v, r1, r2, r3, r4, r5, temp, compare[4];
    for(v = 1001; v < 10000; v++) {
        if(v % 100 == 0)
            continue;
        for(r1 = 10; r1 < 100; r1++) {
            for(r2 = 10; r2 < 100; r2++) {
                if(r1 * r2 == v) {
                    for(r3 = 0; r3 < 4; r3++)
                        compare[r3] = get(v, r3);
                    temp = r1 * 100 + r2;
                    for(r4 = 0; r4 < 4; r4++) {
                        for(r5 = 0; r5 < r3; r5++) {
                            if(compare[r5] == get(temp, r4)) {
                                while(r5 < r3 - 1) {
                                    compare[r5] = compare[r5 + 1];
                                    r5++;
                                }
                                r3--;
                                break;
                            }
                        }
                    }
                    if(!r3) {
                        printf("%d = %d * %d\n", v, r1, r2);
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}
