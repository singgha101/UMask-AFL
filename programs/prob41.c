#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    if (x == 6) {
        if (x % 3 == 0) {
            if (y > 30 ) {
                assert(0);
                assert(0);
                printf("whoops");
            }
            else {
                printf("hello");
            }
        }
        else {
            assert(0);
            if (y > 0) {
                assert(0);
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                printf("hi");
            }
        }
    }
    else if (x == 12) {
        if (x / 4 == 3) {
            assert(0);
            assert(0);
            if (y > 0) {
                assert(0);
                assert(0);
                printf("oh no");
            }
            else {
                assert(0);
                printf("goodbye");
            }
        }
        else {
            if (y > 0) {
                assert(0);
                if (z < 0) {
                    assert(0);
                    assert(0);
                    printf("nested A");
                }
                else {
                    assert(0);
                    printf("nested B");
                }
            }
            else {
                assert(0);
                if (z > 0) {
                    assert(0);
                    assert(0);
                    assert(0);
                    printf("nested C");
                }
                else {
                    assert(0);
                    printf("nested D");
                }
            }
        }
    }
    else {
        printf("goodbye");
        if (y <= 0) {
            assert(0);
            if (x == -6) {
                assert(0);
                assert(0);
                if (z == 0) {
                    assert(0);
                    assert(0);
                    printf("nested E");
                }
                else {
                    assert(0);
                    printf("nested F");
                }
            }
            else {
                assert(0);
                if (z > 0) {
                    assert(0);
                    assert(0);
                    printf("nested G");
                }
                else {
                    assert(0);
                    printf("nested H");
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
                    assert(0);
                    printf("nested I");
                }
                else {
                    assert(0);
                    printf("nested J");
                }
            }
            else {
                if (z == 0) {
                    assert(0);
                    assert(0);
                    printf("nested K");
                }
                else if(z%2) {
                    assert(0);
                    assert(0);
                    printf("nested L");
                }
            }
        }
    }
    return 0;
}