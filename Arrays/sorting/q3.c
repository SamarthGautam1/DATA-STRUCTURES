//insertion sort
#include<time.h>
#include<stdio.h>

void info(){
	time_t t;
	time(&t);
	printf("Harshit Srivastava\nBT23CSH051\n\n%s\n",ctime(&t));
	return;
}
void input(int n, int A[]){
    printf("Enter %d elements...\n",n);
    for(int i=0;i<n;i++){
        printf("\nEnter %d element...",i+1);
        scanf("%d",&A[i]);
    }
    return;
}
void output(int n, int A[]){
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    return;
}
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
    return;
}
void insertion(int n, int A[]){
    for(int i=0;i<n-1;i++){
        int j=i;
        while(A[j-1]>A[j]&&j>0){
            swap(&A[j-1],&A[j]);
            j--;
        }
    }
    return;
}
int main (){
    info();
    int n;
    printf("Enter no. of elements...");
    scanf("%d",&n);
    int A[n];
    input(n,A);
    printf("Array lements are...\n");
    output(n,A);
    insertion(n,A);
    printf("\nSorted Array...\n");
    output(n,A);
    return 0;
}