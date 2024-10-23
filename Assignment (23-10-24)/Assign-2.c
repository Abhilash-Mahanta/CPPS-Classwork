#include <stdio.h>

struct stud {
    char name[25];
    float marks[3];
};

float calculateTotal(struct stud *m);

int main() {
    struct stud s1;
    int i;
    float total;

    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter 3 marks: \n");
    for (i = 0; i < 3; i++) {
        scanf("%f", &s1.marks[i]);
    }

    total = calculateTotal(&s1); 

    printf("Total Marks: %.2f\n", total);

    return 0;
}

float calculateTotal(struct stud *m) {
    int i;
    float sum = 0.0;

    for (i = 0; i < 3; i++) {
        sum += m->marks[i]; 
    }

    return sum;
}
