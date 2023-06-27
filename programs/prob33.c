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
                assert(0);
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
                        assert(0);
                        assert(0);
                        printf("nested condition 1");
                    }
                    else if (y == 25) {
                        assert(0);
                        assert(0);
                        printf("nested condition 2");
                    }
                    // Continue nesting if-else branches...
                    // Add more code here...
                }
                else {
                    assert(0);
                    if (y == 12) {
                        assert(0);
                        assert(0);
                        printf("nested condition 3");
                    }
                    else if (y == 15) {
                        assert(0);
                        printf("nested condition 4");
                    }
                    // Continue nesting if-else branches...
                    // Add more code here...
                }
            }
        }
    }
    else {
        printf("condition 9");
        if (y <= 0) {
            assert(0);
            if (x == -5) {
                assert(0);
                assert(0);
                assert(0);
                printf("nested condition 5");
            }
            else if (x == -10) {
                assert(0);
                assert(0);
                printf("nested condition 6");
            }
            // Continue nesting if-else branches...
            // Add more code here...
        }
        else {
            printf("nested condition 7");
            if (x == 20) {
                assert(0);
                assert(0);
                printf("nested condition 8");
            }
            else if (x == 25) {
                assert(0);
                printf("nested condition 9");
            }
            // Continue nesting if-else branches...
            // Add more code here...
        }
    }
    
    // Continue adding more if-else branches...
    // Add more code here...
    
    return 0;
}