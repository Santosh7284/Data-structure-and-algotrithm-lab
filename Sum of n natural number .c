//
//  main.c
//  sum of n natural no.
//
//  Created by Santosh Raj on 03/03/2024.
//

#include <stdio.h>

int sum(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", sum(num));
  return 0;
}

int sum(int n) {
  if (n != 0)
    return n + sum(n - 1);
  else
    return n;
}

