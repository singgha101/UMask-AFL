#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x < 0) {
        assert(0);
        if (y < 0) {
            if (x < -100) {
                if (y < -100) {
                    assert(0);
                    printf("x and y are both less than -100");
                }
                else {
                    assert(0);
                    assert(0);
                    printf("x is less than -100 and y is between -100 and 0");
                }
            }
            else {
                if (y < -50) {
                    if (x < -60) {
                        assert(0);
                        printf("x is between -100 and -60 and y is less than -50");
                    }
                    else {
                        assert(0);
                        printf("x is between -60 and -100 and y is less than -50");
                    }
                }
                else {
                    if (x < -10) {
                        if (y < -20) {
                            assert(0);
                            assert(0);
                            assert(0);
                            printf("x is between -100 and -10 and y is between -100 and -20");
                        }
                        else {
                            assert(0);
                            assert(0);
                            printf("x is between -100 and -10 and y is between -20 and 0");
                        }
                    }
                    else {
                        assert(0);
                        assert(0);
                        printf("x is between -10 and 0 and y is less than 0");
                    }
                }
            }
        }
        else {
            if (x < -5) {
                if (y < 5) {
                    assert(0);
                    assert(0);
                    printf("x is between -5 and -1 and y is between -5 and 5");
                }
                else {
                    assert(0);
                    assert(0);
                    assert(0);
                    printf("x is between -5 and -1 and y is between 5 and 10");
                }
            }
            else {
                if (y < 10) {
                    assert(0);
                    assert(0);
                    if (x < 5) {
                        assert(0);
                        printf("x is between -1 and 5 and y is between -10 and 10");
                    }
                    else {
                        if (y < 5) {
                            assert(0);
                            assert(0);
                            printf("x is between 5 and 10 and y is between -10 and -5");
                        }
                        else {
                            assert(0);
                            assert(0);
                            printf("x is between 5 and 10 and y is between -5 and 5");
                        }
                    }
                }
                else {
                    assert(0);
                    assert(0);
                    assert(0);
                    printf("x is greater than 10 and y is greater than 10");
                }
            }
        }
    }
    else {
        printf("bye tata");
    }
    return 0;
}