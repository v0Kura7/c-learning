#include <stdio.h>
struct Student{
    char id[10];
    char name[10];
    int score;
};
int main()
{
    int N;
    scanf("%d", &N);
    struct Student s[100];
    int sum = 0;
    for(int i = 0; i<N; i++)
        {
            scanf("%s %s %d\n", s[i].id, s[i].name, &s[i].score);
            sum += s[i].score;
        }
    double avg = 1.0 * sum / N;
    printf("%.2f\n", avg);
    for(int i = 0; i < N; i++)
        {
            if(s[i].score < avg)
            {
                printf("%s %s\n", s[i].name, s[i].id);
            }
        }
    return 0;
        }