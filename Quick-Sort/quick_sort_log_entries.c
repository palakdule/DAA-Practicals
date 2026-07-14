#include <stdio.h>
void swap(long long* a, long long* b) {
    long long temp = *a;
    *a = *b;
    *b = temp;

}

int partition(long long arr[], int low, int high) {
    long long pivot = arr[high];
    int i = low - 1;
    for(int j=low; j<high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1], &arr[high]);

    return i+1;
}

void quickSort(long long arr[], int low, int high) {
    
    if(low<high) {
        int pi = partition(arr,low,high);
 
    quickSort(arr, low, pi-1 );

    quickSort(arr, pi + 1, high );


}

}

int main() {
    int n;
    printf("Enter number of log entries: "); 
    scanf("%d", &n); 
    if (n <= 0) return 0;
    long long logs[n];
    printf("Enter %d Unix timestamps:\n", n);
    for(int i=0 ; i < n; i++){
        scanf("%lld", &logs[i]);
    }
    quickSort(logs, 0, n - 1 );
    printf("Chronologically Sorted Timestamps:\n");
    for (int i = 0; i < n; i ++) {
        printf("%lld\n", logs[i]);

}   
    return 0;
}
