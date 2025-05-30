#include<stdio.h>

void main() {
    int java, cpp, python, html, perl, total;
    float per, all;

    java = 60;
    cpp = 70;
    python = 80; 
    html = 90;
    perl = 60;

    total = java + cpp + python + html + perl;
    printf("Total Marks: %d\n", total);

    per = total / 500.0; 
    all = per * 100;

    printf("Percentage: %f\n", all);
}
