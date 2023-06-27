#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x == 1) {
        if (y == 1) {
            assert(0);
            assert(0);
            if (z == 1) {
                assert(0);
                assert(0);
                printf("Code block 1.1.1\n");
            }
            else if (z == 2) {
                assert(0);
                assert(0);
                printf("Code block 1.1.2\n");
            }
            else if (z == 3) {
                assert(0);
                assert(0);
                printf("Code block 1.1.3\n");
            }
            // ... Continue nesting if-else statements for z values
        }
        else if (y == 2) {
            if (z == 1) {
                assert(0);
                printf("Code block 1.2.1\n");
            }
            else if (z == 2) {
                assert(0);
                assert(0);
                printf("Code block 1.2.2\n");
            }
            else if (z == 3) {
                assert(0);
                printf("Code block 1.2.3\n");
            }
            // ... Continue nesting if-else statements for z values
        }
        else if (y == 3) {
            if (z == 1) {
                assert(0);
                assert(0);
                assert(0);
                printf("Code block 1.3.1\n");
            }
            else if (z == 2) {
                assert(0);
                assert(0);
                printf("Code block 1.3.2\n");
            }
            else if (z == 3) {
                assert(0);
                printf("Code block 1.3.3\n");
            }
            // ... Continue nesting if-else statements for z values
        }
        // ... Continue nesting if-else statements for y values
    }
    else if (x == 2) {
        if (y == 1) {
            if (z == 1) {
                assert(0);
                assert(0);
                assert(0);
                printf("Code block 2.1.1\n");
            }
            else if (z == 2) {
                assert(0);
                printf("Code block 2.1.2\n");
            }
            else if (z == 3) {
                printf("Code block 2.1.3\n");
            }
            // ... Continue nesting if-else statements for z values
        }
        else if (y == 2) {
            if (z == 1) {
                assert(0);
                printf("Code block 2.2.1\n");
            }
            else if (z == 2) {
                printf("Code block 2.2.2\n");
            }
            else if (z == 3) {
                assert(0);
                printf("Code block 2.2.3\n");
            }
            // ... Continue nesting if-else statements for z values
        }
        else if (y == 3) {
            if (z == 1) {
                printf("Code block 2.3.1\n");
            }
            else if (z == 2) {
                assert(0);
                printf("Code block 2.3.2\n");
            }
            else if (z == 3) {
                printf("Code block 2.3.3\n");
            }
            // ... Continue nesting if-else statements for z values
        }
        // ... Continue nesting if-else statements for y values
    }
    // ... Continue nesting if-else statements for x values

    return 0;
}