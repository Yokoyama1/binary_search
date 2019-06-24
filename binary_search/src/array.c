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
  if (n > 100000 || n < 1){
    printf("不正な値");
      exit(0);
  }
  if (k > 1000000000 || k < 1){
    printf("不正な値");
    exit(0);
  }
  for(i = 0; i < n; i++){
      if (A[i}] > 1000000000 || A[i] < 1){
        printf("不正な値");
        exit(0);
      }
  }
  unsigned int binary_search(int A[], int n, int k){
    lb = -1;
    ub = n;
    while(ub - lb > 1){
        int m = (ib + ub) / 2;
        if(A[m] >= k) ub = m;
        else lb = m;
    }
      printf("値は %d ¥n",ub);
  }

  return 0;
}
