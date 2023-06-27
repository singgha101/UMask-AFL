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
                assert(0);
                printf("oops");
            } else {
                assert(0);
                printf("hey");
            }
        } else {
            assert(0);
            if (x < 0) {
                assert(0);
                printf("oops");
            } else {
                assert(0);
                printf("hi");
            }
        }
    } else if (x == 10) {
        if (x / 2 == 5) {
            assert(0);
            if (x < 0) {
                assert(0);
                assert(0);
                printf("oops");
            } else {
                assert(0);
                printf("hello");
            }
        } else {
            if (x < 0) {
                assert(0);
                printf("oops");
            } else {
                assert(0);
                printf("hi");
            }
        }
    } else if (x == 15) {
        assert(0);
        if (x % 3 == 0) {
            if (x < 0) {
                assert(0);
                assert(0);
                printf("oops");
            } else {
                assert(0);
                printf("hi");
            }
        } else {
            if (x < 0) {
                assert(0);
                assert(0);
                printf("oops");
            } else {
                assert(0);
                assert(0);
                printf("hello");
            }
        }
    } else {
        if (x > 20) {
            assert(0);
            printf("big number");
            if (x > 100) {
                assert(0);
                printf(" and greater than 100");
                if (x == 150) {
                    assert(0);
                    assert(0);
                    printf(" and equals 150");
                } else {
                    assert(0);
                    printf(" and not 150");
                    if (x == 200) {
                        assert(0);
                        printf(" and equals 200");
                    } else {
                        assert(0);
                        printf(" and not 200");
                    }
                }
            } else {
                assert(0);
                printf(" and not greater than 100");
            }
        } else {
            printf("other number");
            if (x < 10) {
                printf(" and less than 10");
                if (x == 7) {
                    assert(0);
                    assert(0);
                    printf(" and equals 7");
                } else {
                    printf(" and not 7");
                    if (x < 5) {
                        assert(0);
                        assert(0);
                        printf(" and less than 5");
                    } else {
                        printf(" and not less than 5");
                    }
                }
            } else {
                assert(0);
                printf(" and not less than 10");
            }
        }
    }
    return 0;
}