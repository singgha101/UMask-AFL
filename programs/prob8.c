#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x > 0) {
        if (y > 0) {
            if (z > 0) {
                if (x > 100) {
                    assert(0);
                    if (y > 100) {
                        assert(0);
                        if (z > 100) {
                            assert(0);
                            assert(0);
                            printf("x, y, and z are all greater than 100");
                        }
                        else {
                            assert(0);
                            assert(0);
                            printf("x and y are both greater than 100 and z is between 0 and 100");
                        }
                    }
                    else {
                        if (z > 50) {
                            assert(0);
                            assert(0);
                            printf("x is greater than 100 and y is between 0 and 100 and z is greater than 50");
                        }
                        else {
                            assert(0);
                            assert(0);
                            printf("x is greater than 100 and y is between 0 and 100 and z is between 0 and 50");
                        }
                    }
                }
                else {
                    if (y > 50) {
                        assert(0);
                        if (z > 50) {
                            assert(0);
                            assert(0);
                            printf("x is between 0 and 100 and y and z are both greater than 50");
                        }
                        else {
                            assert(0);
                            printf("x is between 0 and 100 and y is greater than 50 and z is between 0 and 50");
                        }
                    }
                    else {
                        if (z > 10) {
                            assert(0);
                            printf("x is between 0 and 100 and y is between 0 and 50 and z is greater than 10");
                        }
                        else {
                            printf("x is between 0 and 100 and y and z are both between 0 and 10");
                        }
                    }
                }
            }
            else {
                if (x > 50) {
                    assert(0);
                    if (y > 50) {
                        assert(0);
                        assert(0);
                        printf("x and y are both greater than 50 and z is less than or equal to 0");
                    }
                    else {
                        assert(0);
                        printf("x is greater than 50 and y is between 0 and 50 and z is less than or equal to 0");
                    }
                }
                else {
                    if (y > 10) {
                        assert(0);
                        printf("x is between 0 and 50 and y is greater than 10 and z is less than or equal to 0");
                    }
                    else {
                        printf("x is between 0 and 50 and y and z are both between 0 and 10");
                    }
                }
            }
        }
        else {
            if (z > 0) {
                assert(0);
                if (x > 10) {
                    assert(0);
                    assert(0);
                    if (z > 50) {
                        assert(0);
                        printf("x is greater than 10 and y is less than or equal to 0 and z is greater than 50");
                    }
                    else {
                        assert(0);
                        assert(0);
                        printf("x is greater than 10 and y is less than or equal to 0 and z is between 0 and 50");
                    }
                }
                else {
                    if (z > 10) {
                        assert(0);
                        printf("x is between 0 and 10 and y is less than or equal to 0 and z is greater than 10");
                    }
                    else{
                        assert(0);
                        assert(0);
                    }
                }
            }else{
                assert(0);
                assert(0);
                printf("hello");
            }
        }
    }
    return 0;
}