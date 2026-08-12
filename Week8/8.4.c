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

  int i;
  int score_max = -1;
  int score_min = 101;
  float sum = 0, average;

  printf(" *** Structure Array ***\n");
  printf("Enter data : ");

  for (i = 0; i < SIZE; i++)
  {
    scanf("%s %s %d", st[i].id, st[i].name, &st[i].score);
    sum += st[i].score;

    if (st[i].score > score_max)
      score_max = st[i].score;

    if (st[i].score < score_min)
      score_min = st[i].score;
  }

  average = sum / SIZE;

  printf("\n\n *** Analyzing Data ***\n");
  printf("Average marking = %.3f\n", average);
  printf("Min -- Max      = %d --> %d\n", score_min, score_max);

  return 0;
}