#include <stdio.h>

// while loop
int main() {
    int n, i = 1, term = 2;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    while (i <= n) {
        printf("%d ", term);
        i++;
        term = i * i;
    }
    
    return 0;
}

//do..while lopp
/*
  #include <stdio.h>

 int main() {
    int n, i = 1, term = 2;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    do {
        printf("%d ", term);
        i++;
        term = i * i;
    } while (i <= n);
    
    return 0;
}

//for loop
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1, term = 2; i <= n; i++) {
        printf("%d ", term);
        term = (i + 1) * (i + 1);
    }
    
    return 0;
}

