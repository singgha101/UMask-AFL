#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x;
    scanf("%d", &x);
    
    if (x == 5) {
    assert(0);
        if (x % 2 == 0) {
        assert(0);
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
    else if (x == 10) {
    assert(0);
        if (x / 2 == 5) {
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
        else {
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
    else if (x == 15) {
        if (x % 3 == 0) {
        assert(0);
        assert(0);
            if (x < 0) {
                assert(0);
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                assert(0);
                assert(0);
                printf("hi");
            }
        }
        else {
            if (x < 0) {
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
    else if (x == 20) {
    assert(0);
        if (x >= 10 && x < 30) {
        assert(0);
            if (x < 0) {
                assert(0);
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                assert(0);
                assert(0);
                printf("howdy");
            }
        }
        else {
            if (x < 0) {
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                assert(0);
                assert(0);
                printf("hey");
            }
        }
    }
    else if (x == 25) {
        if (x == 25) {
        assert(0);
        assert(0);
            if (x < 0) {
                assert(0);
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                assert(0);
                printf("yo");
            }
        }
        else {
            if (x < 0) {
                assert(0);
                assert(0);
                assert(0);
                printf("oops");
            }
            else {
                assert(0);
                assert(0);
                printf("hey");
            }
        }
    }
    else{
        printf("hi bye");
    }
    return 0;
}