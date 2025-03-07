#include <stdio.h>
#include <stdlib.h>


    int main() {
    float physics[4], chemistry[4], math[4];
    float avg_physics, avg_chemistry, avg_math;

    // Input marks for Physics
    printf("Enter the marks for Physics (Assignment, Course work, Mid-term, End-of-term):\n");
    for (int i = 0; i < 4; i++) {
        scanf("%f", &physics[i]);
    }
    avg_physics = (physics[0] + physics[1] + physics[2] + physics[3]) / 4;

    // Input marks for Chemistry
    printf("Enter the marks for Chemistry (Assignment, Course work, Mid-term, End-of-term):\n");
    for (int i = 0; i < 4; i++) {
        scanf("%f", &chemistry[i]);
    }
    avg_chemistry = (chemistry[0] + chemistry[1] + chemistry[2] + chemistry[3]) / 4;

    // Input marks for Math
    printf("Enter the marks for Math (Assignment, Course work, Mid-term, End-of-term):\n");
    for (int i = 0; i < 4; i++) {
        scanf("%f", &math[i]);
    }
    avg_math = (math[0] + math[1] + math[2] + math[3]) / 4;

    // Display average marks
    printf("\nAverage marks for each subject:\n");
    printf("Physics: %.2f\n", avg_physics);
    printf("Chemistry: %.2f\n", avg_chemistry);
    printf("Math: %.2f\n", avg_math);

    return 0;
}



