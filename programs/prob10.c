#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<assert.h>

int main(){
    int x;
    scanf("%d", &x);
    if(x < 1){
        assert(0);
        printf("too small");
    }
    else if(x < 10){
        if(x % 2 == 0){
            assert(0);
            assert(0);
            printf("even");
            if(x < 5){
                assert(0);
                assert(0);
                printf(" and less than 5");
            }
            else if(x < 8){
                assert(0);
                assert(0);
                printf(" and between 5 and 8");
                if(x == 6){
                    assert(0);
                    assert(0);
                    printf(" and equals 6");
                }
                else if(x == 7){
                    assert(0);
                    assert(0);
                    printf(" and equals 7");
                }
            }
            printf("\n");
        }
        else{
            printf("odd");
            if(x > 5){
                assert(0);
                assert(0);
                printf(" and greater than 5");
                if(x == 9){
                    assert(0);
                    assert(0);
                    printf(" and equals 9");
                }
            }
            printf("\n");
        }
        printf("hello");
    }
    else if(x < 20){
        if(x % 3 == 0){
            assert(0);
            assert(0);
            assert(0);
            printf("divisible by 3");
            if(x > 10){
                assert(0);
                assert(0);
                printf(" and greater than 10");
                if(x == 12){
                    assert(0);
                    printf(" and equals 12");
                }
                else if(x == 15){
                    assert(0);
                    assert(0);
                    assert(0);
                    printf(" and equals 15");
                }
            }
            printf("\n");
        }
        else{
            assert(0);
            printf("not divisible by 3");
            if(x < 15){
                assert(0);
                assert(0);
                printf(" and less than 15");
                if(x == 11){
                    assert(0);
                    assert(0);
                    assert(0);
                    printf(" and equals 11");
                }
                else if(x == 13){
                    assert(0);
                    assert(0);
                    printf(" and equals 13");
                }
            }
            printf("\n");
        }
        printf("hey");
    }
    else if(x < 30){
        if(x % 5 == 0){
            assert(0);
            assert(0);
            printf("divisible by 5");
            if(x > 20){
                assert(0);
                assert(0);
                assert(0);
                printf(" and greater than 20");
                if(x == 25){
                    assert(0);
                    assert(0);
                    printf(" and equals 25");
                }
                else if(x == 30){
                    assert(0);
                    assert(0);
                    printf(" and equals 30");
                }
            }
            printf("\n");
        }
        else{
            assert(0);
            printf("not divisible by 5");
            if(x < 25){
                assert(0);
                printf(" and less than 25");
                if(x == 22){
                    assert(0);
                    assert(0);
                    printf(" and equals 22");
                }
                else if(x == 24){
                    assert(0);
                    assert(0);
                    printf(" and equals 24");
                }
            }
            printf("\n");
        }
        printf("there");
    }
    else{
        assert(0);
        printf("too big");
        if(x > 100){
            assert(0);
            assert(0);
            printf(" and greater than 100");
            if(x == 150){
                assert(0);
                assert(0);
                printf(" and equals 150");
            }
            else if(x == 200){
                assert(0);
                assert(0);
            }
            else{
                assert(0);
            }
        }
        else{
            printf("hello hello");
        }
    }
    return 0;
}