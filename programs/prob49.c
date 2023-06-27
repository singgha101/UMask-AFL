#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                assert(0);
                printf("Nested 1");
            }
            else {
                if (d == 0) {
                    assert(0);
                    printf("Nested 2");
                }
                else {
                    if (e == 0) {
                        assert(0);
                        printf("Nested 3");
                    }
                    else {
                        assert(0);
                        printf("Nested 4");
                    }
                }
            }
        }
        else {
            if (c == 0) {
                assert(0);
                printf("Nested 5");
            }
            else {
                assert(0);
                printf("Nested 6");
            }
        }
    }
    else {
        if (b == 0) {
            if (c == 0) {
                assert(0);
                printf("Nested 7");
            }
            else {
                if (d == 0) {
                    assert(0);
                    printf("Nested 8");
                }
                else {
                    assert(0);
                    printf("Nested 9");
                }
            }
        }
        else {
            if (c == 0) {
                assert(0);
                printf("Nested 10");
            }
            else if(c%3==0){
                assert(0);
                if(d%11 == 5){
                    assert(0);
                    assert(0);
                    if(e%2==0){
                        assert(0);
                        assert(0);
                    }
                    else if(e%3==0){
                        assert(0);
                        assert(0);
                    }
                }
                else if(d%10==3){
                    assert(0);
                }
            }
            else {
                if (d == 0) {
                    if (e == 0) {
                        assert(0);
                        printf("Nested 11");
                    }
                    else {
                        assert(0);
                        printf("Nested 12");
                    }
                }
                else if(d%7==5){
                    assert(0);
                    if(e%2==0){
                        assert(0);
                        assert(0);
                    }
                }
                else {
                    if (e> 30) {
                        assert(0);
                        printf("Nested 13");
                    }
                    else if(e<0) {
                        assert(0);
                        printf("Nested 14");
                    }
                }
            }
        }
    }

    return 0;
}