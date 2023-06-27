#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    if (x == 5) {
        assert(0);
        if (x % 2 == 0) {
            if (y > 0 && z < 0) {
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                printf("hey");
            }
        }
        else {
            assert(0);
            if (y > 0 && z < 0) {
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                printf("hi");
            }
        }
    }
    else if (x == 10) {
        if (x / 2 == 5) {
            assert(0);
            if (y > 0 && z < 0) {
                assert(0);
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                printf("hello");
            }
        }
        else {
            if (y > 0 && z < 0) {
                assert(0);
                printf("oops");
            }
            else {
                printf("hi");
                if (x > 15) {
                    assert(0);
                    if (y == 20 && z == 25) {
                        assert(0);
                        assert(0);
                        printf("nested 1");
                    }
                    else if (y == 30 && z == 35) {
                        assert(0);
                        assert(0);
                        printf("nested 2");
                    }
                }
                else {
                    assert(0);
                    if (y == 12 && z == 15) {
                        assert(0);
                        assert(0);
                        printf("nested 3");
                    }
                    else if (y == 22 && z == 25) {
                        assert(0);
                        assert(0);
                        printf("nested 4");
                    }
                }
            }
        }
    }
    else if (x == 15) {
        assert(0);
        if (x % 3 == 0) {
            if (y > 0 && z < 0) {
                assert(0);
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                printf("hi");
            }
        }
        else {
            if (y > 0 && z < 0) {
                assert(0);
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                assert(0);
                printf("hello");
            }
        }
    }
    else {
        printf("bye");
        if (y > 0 && z < 0) {
            assert(0);
            if (x == -5 && y == -10 && z == -15) {
                assert(0);
                assert(0);
                printf("nested 5");
            }
            else if (x == -10 && y == -15 && z == -20) {
                assert(0);
                assert(0);
                printf("nested 6");
            }
        }
        else {
            if (x == 20 && y == 25 && z == 30) {
                assert(0);
                assert(0);
                printf("nested 7");
            }
            else if (x == 25 && y == 30 && z == 35) {
                assert(0);
                assert(0);
                printf("nested 8");
            }
        }
    }
    return 0;
}