#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x;
    scanf("%d", &x);
    
    if (x == 5) {
        if (x % 2 == 0) {
            if (x < 0) {
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                assert(0);
                printf("hey");
            }
        }
        else {
            assert(0);
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
    }
    else if (x == 10) {
        if (x / 2 == 5) {
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
        else {
            if (x < 0) {
                assert(0);
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                assert(0);
                printf("hi");
            }
        }
    }
    else if (x == 15) {
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
            assert(0);
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
    }
    return 0;
}