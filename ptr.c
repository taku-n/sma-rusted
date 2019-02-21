#include <stdio.h>

void ptr(const double *p);

void ptr(const double *p)
{
    char s[100];
    FILE* fp;

    fp = fopen("out.txt", "w+");

    snprintf(s, 100, "%p\n", (void *)p);
    fputs(s, fp);

    snprintf(s, 100, "%lf\n", p[0]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", p[1]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", p[2]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", p[3]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", p[4]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", p[5]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", p[6]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", p[7]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", p[8]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", p[9]);
    fputs(s, fp);

    if (fclose(fp) == EOF) {
        return ;
    }

    return;
}
