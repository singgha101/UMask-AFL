#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x < 0) {
        assert(0);
        if (x < -10) {
            assert(0);
            if (x < -100) {
                assert(0);
                assert(0);
                printf("x is less than -100");
            }
            else {
                if (x < -50) {
                    assert(0);
                    assert(0);
                    printf("x is less than -50");
                }
                else {
                    assert(0);
                    assert(0);
                    printf("x is between -50 and -10");
                }
            }
        }
        else {
            if (x < -5) {
                assert(0);
                if (x < -7) {
                    assert(0);
                    assert(0);
                    printf("x is less than -7");
                }
                else {
                    assert(0);
                    assert(0);
                    printf("x is between -7 and -5");
                }
            }
            else {
                if (x < -2) {
                    assert(0);
                    assert(0);
                    assert(0);
                    printf("x is between -5 and -2");
                }
                else {
                    if (x < -1) {
                        assert(0);
                        printf("x is between -2 and -1");
                    }
                    else {
                        assert(0);
                        printf("x is between -1 and 0");
                    }
                }
            }
        }
    }
    else {
        if (x > 10) {
            if (x > 100) {
                assert(0);
                assert(0);
                printf("x is greater than 100");
            }
            else {
                if (x > 50) {
                    assert(0);
                    assert(0);
                    assert(0);
                    printf("x is between 50 and 100");
                }
                else {
                    if (x > 20) {
                        if (x > 30) {
                            assert(0);
                            printf("x is greater than 30");
                        }
                        else {
                            assert(0);
                            assert(0);
                            printf("x is between 20 and 30");
                        }
                    }
                    else {
                        assert(0);
                        assert(0);
                        printf("x is between 10 and 20");
                    }
                }
            }
        }
        else {
            if (x > 5) {
                assert(0);
                assert(0);
                if (x > 7) {
                    assert(0);
                    assert(0);
                    if (x > 8) {
                        assert(0);
                        assert(0);
                        assert(0);
                        printf("x is greater than 8");
                    }
                    else {
                        assert(0);
                        printf("x is between 7 and 8");
                    }
                }
                else {
                    assert(0);
                    printf("x is between 5 and 7");
                }
            }
            else {
                if (x > 2) {
                    printf("x is between 2 and 5");
                }
                else {
                    if (x > 1) {
                        assert(0);
                        printf("x is between 1 and 2");
                    }
                    else {
                        assert(0);
                        assert(0);
                        printf("x is between 0 and 1");
                    }
                }
            }
        }
    }
    return 0;
}