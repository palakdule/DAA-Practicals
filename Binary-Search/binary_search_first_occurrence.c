#include<stdio.h>
int findFirstOccurrence(int arr[], int n, int target){
    int low = 0, high=n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int n, target;
    printf("scrolls: ");
    scanf("%d", &n);
    int archive[n];
     printf("sorted Archive IDs:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &archive[i]);
    }
    printf("Archive ID: ");
    scanf("%d", &target);
    int index = findFirstOccurrence(archive, n, target);
    if(index != -1){
        printf("Scroll found at position: %d\n", index);

    }else{
        printf("Scroll not found\n");
    }
    return 0;
}
