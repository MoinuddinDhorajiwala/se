#include <stdio.h>

void gradeEvaluation(int marks) {
    if (marks < 0 || marks > 100)
        printf("Invalid marks\n");
    else if (marks >= 90)
        printf("Grade A\n");
    else if (marks >= 75)
        printf("Grade B\n");
    else if (marks >= 50)
        printf("Grade C\n");
    else
        printf("Fail\n");
}

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    gradeEvaluation(marks);
    return 0;
}












/*
| Marks Range                 | Grade |
| --------------------------- | ----- |
| 90–100                      | A     |
| 75–89                       | B     |
| 50–74                       | C     |
| 0–49                        | Fail  |
| Invalid if marks <0 or >100 |       |

### 1. Equivalence Class Partitioning (ECP)

We divide the input domain into valid and invalid partitions:

| Equivalence Class | Range  | Expected Output | Validity |
| ----------------- | ------ | --------------- | -------- |
| EC1               | 0–49   | Fail            | Valid    |
| EC2               | 50–74  | C               | Valid    |
| EC3               | 75–89  | B               | Valid    |
| EC4               | 90–100 | A               | Valid    |
| EC5               | <0     | Invalid input   | Invalid  |
| EC6               | >100   | Invalid input   | Invalid  |

| Test Case | Input | Expected Output |
| --------- | ----- | --------------- |
| TC1       | 25    | Fail            |
| TC2       | 60    | C               |
| TC3       | 80    | B               |
| TC4       | 95    | A               |
| TC5       | -5    | Invalid         |
| TC6       | 105   | Invalid         |

### 2. Boundary Value Analysis (BVA)

Boundaries: 0, 49, 50, 74, 75, 89, 90, 100

| Test Case | Input | Expected Output |
| --------- | ----- | --------------- |
| TC1       | -1    | Invalid         |
| TC2       | 0     | Fail            |
| TC3       | 49    | Fail            |
| TC4       | 50    | C               |
| TC5       | 74    | C               |
| TC6       | 75    | B               |
| TC7       | 89    | B               |
| TC8       | 90    | A               |
| TC9       | 100   | A               |
| TC10      | 101   | Invalid         |
*/
