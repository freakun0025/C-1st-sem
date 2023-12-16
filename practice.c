#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print_array(char *a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", a[i]);
    }
}

char **new_array(int n) {
    char **p = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        char a[100];
        printf("Enter a string: ");
        scanf("%s", a);
        p[i] = (char *)malloc(strlen(a) + 1);
        strcpy(p[i], a);
    }
    return p;
}

void delete_array(char **p, int n) {
    for (int i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);
    printf("\nSuccessfully de-allocated memory");
}

int main() {
    int n;
    printf("Read an integer n: ");
    scanf("%d", &n);

    char **p = new_array(n);
    print_array(p, n);
    delete_array(p, n);

    return 0;
}
