#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x == 5) {
        assert(0);
        if (x % 2 == 0) {
            if (x < 0) {
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
            if (x < 0) {
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
        if (x / 2 == y) {
            assert(0);
            if (x < 0) {
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
            if (x < 0) {
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                printf("hi");
                if (x > 15) {
                    assert(0);
                    if (x == 20) {
                        assert(0);
                        printf("nested 1");
                    }
                    else if (x == 25) {
                        assert(0);
                        printf("nested 2");
                    }
                }
                else {
                    assert(0);
                    if (x == 12) {
                        assert(0);
                        printf("nested 3");
                    }
                    else if (x == 15) {
                        assert(0);
                        printf("nested 4");
                    }
                }
            }
        }
    }
    else if (x == 15) {
        assert(0);
        if (x % 3 == y) {
            if (x < 0) {
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
            if (x < 0) {
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
        if (x < 0) {
            assert(0);
            if (x == -5) {
                assert(0);
                printf("nested 5");
            }
            else if (x == -10) {
                assert(0);
                printf("nested 6");
            }
        }
        else {
            if (x == 20) {
                assert(0);
                assert(0);
                printf("nested 7");
            }
            else if (x == 25) {
                assert(0);
                printf("nested 8");
            }
        }
    }
    return 0;
}