#include <stdio.h>
#include <stdlib.h> 

void update(int *a,int *b) {
       int result1 = *a+ *b;
       int result2 = *a- *b;
       result2 = abs(result2);

       *a= result1;
       *b= result2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}