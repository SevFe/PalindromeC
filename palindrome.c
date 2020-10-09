// Import all required modules

#include <stdio.h>
#include <string.h>

int main(void) 
{
  // Set up variables
  
  char stringGiven[100];
  char temp1[50];
  char temp2[50];
  char *pLeft;
  char *pRight;
  
  // Take user input

  printf("Input a string: ");
  scanf("%s", stringGiven);
  
  // Set up variables regarding the length of the variables as well as the middle of the string

  int target = strlen(stringGiven)/2;
  int length = strlen(stringGiven);
  
  // Assign pointers to left side and right side of string  

  pLeft = &stringGiven[target - 1];

  if (length % 2 == 0)
  {
    pRight = &stringGiven[target];
  }
  else
  {
    pRight = &stringGiven[target + 1];
  }
  
  // Move across the string and copy each letter to its pointer

  for (int i = 0; i < target; i++)
  {
    temp1[i] = *pLeft--;
    temp2[i] = *pRight++;
  }
  
  // If left pointer's value = right pointer's value, the string is palindrome

  if (strcmp(temp1, temp2) == 0)
  {
    printf("Palindrome\n");
  }
  else 
  {
    printf("Not Palindrome\n");
  }
}
