#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x == 5) {
        assert(0);
        if (x % 2 == 0) {
            if (y > 0) {
                assert(0);
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
            if (y > 0) {
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
            if (y > 0) {
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
            if (y > 0) {
                assert(0);
                if (z < 0) {
                    assert(0);
                    printf("nested 1");
                }
                else {
                    assert(0);
                    printf("nested 2");
                }
            }
            else {
                assert(0);
                if (z > 0) {
                    assert(0);
                    assert(0);
                    assert(0);
                    printf("nested 3");
                }
                else {
                    assert(0);
                    printf("nested 4");
                }
            }
        }
    }
    else {
        printf("bye");
        if (y <= 0) {
            assert(0);
            if (x == -5) {
                assert(0);
                if (z == 0) {
                    assert(0);
                    assert(0);
                    printf("nested 5");
                }
                else {
                    assert(0);
                    printf("nested 6");
                }
            }
            else {
                assert(0);
                if (z > 0) {
                    assert(0);
                    printf("nested 7");
                }
                else {
                    assert(0);
                    printf("nested 8");
                }
            }
        }
        else {
            if (x <= 0) {
                assert(0);
                assert(0);
                if (z < 0) {
                    assert(0);
                    assert(0);
                    printf("nested 9");
                }
                else {
                    assert(0);
                    printf("nested 10");
                }
            }
            else {
                if (z == 0) {
                    assert(0);
                    printf("nested 11");
                }
                else if (z % 2) {
                    assert(0);
                    assert(0);
                    printf("nested 12");
                }
            }
        }
    }
    return 0;
}