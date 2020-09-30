#include <stdio.h>
#include <string.h>

int main(void) 
{
  char stringGiven[100];
  char temp1[50];
  char temp2[50];
  char *pLeft;
  char *pRight;

  printf("Input a string: ");
  scanf("%s", stringGiven);

  int target = strlen(stringGiven)/2;
  int length = strlen(stringGiven);

  pLeft = &stringGiven[target - 1];

  if (length % 2 == 0)
  {
    pRight = &stringGiven[target];
  }
  if (length % 2 == 1)
  {
    pRight = &stringGiven[target + 1];
  }

  for (int i = 0; i < target; i++)
  {
    temp1[i] = *pLeft--;
    temp2[i] = *pRight++;
  }

  if (strcmp(temp1, temp2) == 0)
  {
    printf("Palindrome\n");
    return 0;
  }
  else 
  {
    printf("Not Palindrome\n");
    return 1;
  }
}
