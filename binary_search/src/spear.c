#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 1;
    ub = A[n-1];
    while(ub-lb >1){
        int m = (lb + ub) / 2;
        for(i = 0; i < n; i++){
            int sum = 0;
            int B[i] = (A[i] / m);
            sum = sum + B[i];
        }
        if(sum >= k){
            lb = m;
        }
        else{
            ub = m;
        }
    }
    printf("%d\n", lb);
  return 0;
}
