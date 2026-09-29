// 04주차 프로그래밍 실습

// #include <stdio.h>

// // 예제 2
// int main(void) {
//     int a = 2, b = 1, c = 5, x = 2;
//     int y = a*x*x + b*x + c;
//     printf("y=%i\n", y);

//     return 0;
// }


// // 예제 3
// int main(void) {
//     int x = 3;
//     int cond1, cond2;

//     cond1 = 2 < x && x < 5;
//     cond2 = x > 1 || x < 4 && x > 3; // &&가 ||보다 우선순위가 높음

//     printf("cond1 = %d, cond2 = %d\n", cond1, cond2);

//     return 0;
// }

// // 예제 4
// int main(void)
// {
//     unsigned int a = 6;   // 0110 (2진수)
//     unsigned int b = 3;   // 0011 (2진수)

//     printf("a & b = %u\n", a & b);   // 비트 AND → 0010 (2)
//     printf("a | b = %u\n", a | b);   // 비트 OR  → 0111 (7)
//     printf("a ^ b = %u\n", a ^ b);   // 비트 XOR → 0101 (5)
//     printf("~a    = %u\n", ~a);      // 비트 NOT → 모든 비트 반전

//     return 0;
// }

// 대면 실습 01
# include <stdio.h>

int main(int argc, char *argv[])
{
    int x, y, z, m;
    int a, b, c;

    x = 2;
    z = 1;
    a = 3;
    b = 4;
    c  =5;

    y = a*x*x + b*x + c;
    m = (x + y+ z) / 3;
    printf("y=%d, m=%d", y, m);
    return 0;
}