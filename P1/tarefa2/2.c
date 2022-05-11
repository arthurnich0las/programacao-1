#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > y) printf("%d %d", y, x);
    else if (y > x) printf("%d %d", x, y);
    else printf("%d %d", x, y);
	return 0;
}