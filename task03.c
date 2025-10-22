#include <stdio.h>

int main() {
    int pass[10], fail[10];   
    int pCount = 0, fCount = 0; 
    int marks, i;
    float avgPass = 0, avgFail = 0;

    printf("Enter quiz marks for students:\n");

    for (int i = 0; i < 10; i++) {
        printf("Student %d marks: ", i + 1);
        scanf("%d", &marks);

        if (marks == -1)
            break;  

        if (marks >= 5 && marks <= 10) {
            pass[pCount] = marks;
            pCount++;
        } 
        else if (marks >= 0 && marks < 5) {
            fail[fCount] = marks;
            fCount++;
        } 
        else {
            printf("Invalid marks! Enter marks between 0–10 or\n");
            i--; 
        }
    }


    for (i = 0; i < pCount; i++)
        avgPass += pass[i];
    for (i = 0; i < fCount; i++)
        avgFail += fail[i];

    if (pCount > 0)
        avgPass /= pCount;
    if (fCount > 0)
        avgFail /= fCount;

    printf("\nMarks of passed students: ");
    for (i = 0; i < pCount; i++)
        printf("%d ", pass[i]);

    printf("\nMarks of failed students: ");
    for (i = 0; i < fCount; i++)
        printf("%d ", fail[i]);

    printf("\n\nAverage marks of passed students: %.2f", avgPass);
    printf("\nAverage marks of failed students: %.2f\n", avgFail);

    return 0;
}
