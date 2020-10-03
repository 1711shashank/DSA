#include <stdio.h>
#include <stdlib.h>
/* Binary Search without recursion*/

int main()
{
  int c, first, last, mid, n, val, arr[100];

  printf("Enter number of elements: ");
  scanf("%d", &n);

  printf("Enter the numbers: \n");

  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);

  printf("Enter value to find\n");
  scanf("%d", &val);

  first = 0;
  last = n - 1;
  mid = (first+last)/2;

  while (first <= last) 
  {
    if (arr[mid] < val)
      first = mid + 1;
    else if (arr[mid] == val) 
	{
      printf("%d found at location %d.\n", val, mid+1);
      break;
    }
    else
      last = mid - 1;

    mid = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", val);

  return 0;
}




