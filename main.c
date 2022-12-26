#include <stdio.h>
#include <stdint.h>

int main() {
    printf("Hello, World!\n");
    int64_t ans = 9223372036854775807;
    long long ans2 = 9223372036854775807;
    signed int ans3 = -2000;
    int ans4 = -3;
    printf("%llu,%llu,%d,%d", ans, ans2, ans3, ans4);
    return 0;
}
