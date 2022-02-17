#include "stdio.h"
void printBinaryUpTo(int max)
{
    char c[max];
  for(int i = 0; i < max; i++)
    {
      
      printf("%c\n", c[i]);
    }
}

int main() {
    printf("hello");
    printBinaryUpTo(7);

}
