#include <stdio.h>

void rotateLeft(int d, int arr[], int arr2[]) {
	
	int i, n;
	scanf("%d %d", &n, &d); 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);    
    }
    
    for (i = 0; i < n; i++) {
        arr2[i] = arr[(i + d) % n];   
    }
}

int main() {
	int i, arr[100], arr2[100];
	rotateLeft(2, arr, arr2);
	
	for (i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}
