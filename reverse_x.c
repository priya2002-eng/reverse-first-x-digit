#include <stdio.h>
int main(){
  int n, x;

  printf("Enter the num of digits: ");
  scanf("%d", &n);
  int a[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  printf("Enter the x digit to reverse: ");
  scanf("%d", &x);

  for(int i = x-1; i >= 0; i--)
    printf("%d", a[i]);

  return 0;
}
