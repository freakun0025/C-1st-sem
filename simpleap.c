#include <stdio.h>
#include <string.h>

int main() {
    char names[20][100];  
    char *nameptrs[20];   

    
    for (int i = 0; i < 20; i++) {
        nameptrs[i] = names[i];
    }

    int n;
    printf("Enter the number of names (n < 10): ");
    scanf("%d", &n);

    

    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", nameptrs[i]);
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (strcmp(nameptrs[j], nameptrs[j + 1]) > 0) {
                
                char *temp = nameptrs[j];
                nameptrs[j] = nameptrs[j + 1];
                nameptrs[j + 1] = temp;
            }
        }
    }

    printf("\nSorted names using nameptrs:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nameptrs[i]);
    }

    printf("\nOriginal names from 2D array:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
