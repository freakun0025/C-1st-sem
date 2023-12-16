#include <stdio.h>

void shift0s (int a[], int n){ 
    int b[n]; 
    int c = 0; 
    for (int i = 0; i < n; i = i + 1){
        if (a[i] == 0){	  
            b[c] = a[i];
            c = c + 1;
        }
        
    }
    
    for (int i = 0; i < n; i = i + 1){
        if (a[i] != 0){
            b[c] = a[i];
            c = c + 1;
        }
        
    }
    
    for (int i = 0; i < n; i = i + 1){
            a[i] = b[i];
    } 
} 
    
    

int main (){
    int n;
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i < n; i = i + 1){
    scanf ("%d", &a[i]);
    } 
    for (int i = 0; i < n; i = i + 1){
        printf ("%d\n", a[i]);
    } 
    shift0s (a, n);
    printf ("The final array is: \n");
    for (int i = 0; i < n; i = i + 1){
        printf ("%d\n", a[i]);
    } 
    printf ("\n");
    return 0;
}
