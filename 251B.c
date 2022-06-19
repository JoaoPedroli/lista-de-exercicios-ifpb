#include <stdio.h>
#include <stdlib.h>
 
static int *memo;
static const int MOD = 1e9+7;
 
unsigned long long factorial (int n) {
  if(n < 2) return 1;
  if(memo[n]) return memo[n];
  return memo[n] = (n * factorial(n-1)) % MOD;
}
 
int main() {
  int n, i;
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  memo = malloc((n+1) * sizeof(int));
  for (i = 0; i <= n; ++i) memo[i] = 0;
  printf("%d! = %lld\n", n, factorial(n));
  
  free(memo);
  memo = NULL;
 
  return 0;
}
 