#include <stdio.h>

int main() {
    /* salary[department][employee][month] */
    int salary[3][4][3];
    int empTotal[3][4];
    int deptTotal[3];
    int highest, hiDept, hiEmp, hiMonth;

    for (int d = 0; d < 3; d++) {
        for (int e = 0; e < 4; e++) {
            for (int m = 0; m < 3; m++) {
                printf("Dept %d, Employee %d, Month %d salary: ", d + 1, e + 1, m + 1);
                scanf("%d", &salary[d][e][m]);
            }
        }
    }

    highest = salary[0][0][0];
    hiDept = hiEmp = hiMonth = 0;

    for (int d = 0; d < 3; d++) {
        deptTotal[d] = 0;
        for (int e = 0; e < 4; e++) {
            empTotal[d][e] = 0;
            for (int m = 0; m < 3; m++) {
                empTotal[d][e] += salary[d][e][m];

                if (salary[d][e][m] > highest) {
                    highest = salary[d][e][m];
                    hiDept = d;
                    hiEmp = e;
                    hiMonth = m;
                }
            }
            deptTotal[d] += empTotal[d][e];
        }
    }

    printf("\n--- Total Salary of Each Employee (3 months) ---\n");
    for (int d = 0; d < 3; d++) {
        for (int e = 0; e < 4; e++) {
            printf("Dept %d, Employee %d: %d\n", d + 1, e + 1, empTotal[d][e]);
        }
    }

    printf("\n--- Department Summary ---\n");
    for (int d = 0; d < 3; d++) {
        printf("Department %d:\n", d + 1);
        printf("  Total salary paid: %d\n", deptTotal[d]);
        printf("  Average monthly salary (per employee): %.2f\n", deptTotal[d] / 12.0);
        printf("  Average monthly payout (whole department): %.2f\n", deptTotal[d] / 3.0);
    }

    printf("\n--- Highest Salary ---\n");
    printf("Amount: %d (Department %d, Employee %d, Month %d)\n",
           highest, hiDept + 1, hiEmp + 1, hiMonth + 1);

    return 0;
}
