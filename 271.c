#include <stdio.h>

int ns[11];

int busca_binaria(int X, int menor, int maior) {
  const int MID = (menor + maior) / 2;
  if(X == ns[MID]) return 1;
  if(maior == menor) return 0;
  if(X < ns[MID]) return busca_binaria(X, menor, MID - 1);
  return busca_binaria(X, MID + 1, maior);
}

void main() {
  for(int i = 0; i < 10; ++i) {
    scanf("%d", &ns[i]);
  }
  int X, M, N; scanf("%d%d%d", &X, &M, &N);
  const int maior = M > N ? M : N;
  const int menor = M > N ? N : M;
  if(busca_binaria(X, menor, maior)) printf("%d esta presente no vetor\n", X);
  else printf("%d nao esta presente no vetor\n", X);
}
