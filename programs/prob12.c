#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x;
    scanf("%d", &x);
    
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
        if (x / 2 == 5) {
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
            }
        }
    }
    else if (x == 15) {
        assert(0);
        if (x % 3 == 0) {
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
        if (x > 20) {
            assert(0);
            printf("greater than 20");
            if (x % 2 == 0) {
                assert(0);
                printf("even");
                if (x > 30) {
                    assert(0);
                    printf("greater than 30");
                }
                else {
                    assert(0);
                    printf("less than or equal to 30");
                    if (x == 25) {
                        assert(0);
                        printf("equals 25");
                    }
                }
            }
            else {
                assert(0);
                printf("odd");
                if (x > 30) {
                    assert(0);
                    printf("greater than 30");
                }
                else {
                    assert(0);
                    printf("less than or equal to 30");
                    if (x == 27) {
                        assert(0);
                        printf("equals 27");
                    }
                }
            }
        }
        else {
            printf("less than or equal to 20");
            if (x % 2 == 0) {
                printf("even");
                if (x > 10) {
                    assert(0);
                    printf("greater than 10");
                    if (x == 15) {
                        assert(0);
                        printf("equals 15");
                    }
                }
                else {
                    printf("less than or equal to 10");
                }
            }
            else {
                printf("odd");
                if (x > 10) {
                    assert(0);
                    printf("greater than 10");
                    if (x == 17) {
                        assert(0);
                        printf("equals 17");
                    }
                    else{
                        assert(0);
                    }
                }
            }
        }
    }
    return 0;
}