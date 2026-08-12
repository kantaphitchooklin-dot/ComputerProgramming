#include <stdio.h>
#define SIZE 10
int main()
{
  struct student
  {
    char id[30];
    char name[80];
    int score;
  } st[SIZE];

  int i, n, score_max = -1, count_max = 0;

  printf(" *** Structure Array 2 ***\n");
  printf("Enter data : ");

  for (i = 0; i < SIZE; i++)
  {
    scanf("%s %s %d", st[i].id, st[i].name, &st[i].score);
  }
  printf("\n\n *** Analyzing Data ***\n");
  for (i = 0; i < SIZE; i++)
  {
    if (st[i].score > score_max)
    {
      score_max = st[i].score;
    }
  }
  for (i = 0; i < SIZE; i++)
  {
    if (st[i].score == score_max)
    {
      count_max++;
    }
  }
  printf("Max marking   = %d points, %d students.\n", score_max, count_max);
  for (i = 0; i < SIZE; i++)
  {
    if (st[i].score == score_max)
    {
      n++;
      printf("%d. %s %s %d\n", n, st[i].id, st[i].name, st[i].score);
    }
  }

  return 0;
}