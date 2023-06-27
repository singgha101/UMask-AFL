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
                printf("condition 1");
            }
            else {
                assert(0);
                printf("condition 2");
            }
        }
        else {
            assert(0);
            if (y > 0) {
                assert(0);
                printf("condition 3");
            }
            else {
                assert(0);
                printf("condition 4");
            }
        }
    }
    else if (x == 10) {
        if (x / 2 == 5) {
            assert(0);
            if (y > 0) {
                assert(0);
                printf("condition 5");
            }
            else {
                assert(0);
                printf("condition 6");
            }
        }
        else {
            if (y > 0) {
                assert(0);
                printf("condition 7");
            }
            else {
                assert(0);
                printf("condition 8");
                if (x > 15) {
                    assert(0);
                    if (y == 20) {
                        assert(0);
                        printf("condition 9");
                    }
                    else if (y == 25) {
                        assert(0);
                        printf("condition 10");
                    }
                }
                else {
                    assert(0);
                    printf("condition 11");
                }
            }
        }
    }
    else {
        printf("condition 12");
        if (y <= 0) {
            assert(0);
            if (x == -5) {
                assert(0);
                printf("condition 13");
            }
            else if (x == -10) {
                assert(0);
                printf("condition 14");
            }
        }
        else {
            printf("condition 15");
            if (x == 25) {
                assert(0);
                assert(0);
                printf("condition 16");
            }
        }
    }
    return 0;
}
