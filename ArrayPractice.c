#include <stdio.h>
#include <stdlib.h>

const int number = 10;

// 输入10名学生的成绩，存储在数组中
void studentarray(float studentDegree[]) {
    for (int i = 0; i < number; i++) {
        printf("Please enter grade for student %d: ", i + 1);
        scanf("%f", &studentDegree[i]);
    }
}

// 计算平均分
float avergedegree(float studentDegree[]) {
    float sum = 0.0;
    for (int i = 0; i < number; i++) {
        sum += studentDegree[i];
    }
    return sum / number;
}

// 输出高于平均分的学生成绩
void higherDegree(float studentDegree[], float mean) {
    printf("Grades higher than the average:\n");
    for (int i = 0; i < number; i++) {
        if (studentDegree[i] > mean) {
            printf("%.2f\n", studentDegree[i]);
        }
    }
}

int main(int argc, char const *argv[]) {
    float studentDegree[number];
    studentarray(studentDegree);
    float result = avergedegree(studentDegree);
    higherDegree(studentDegree, result);
    printf("Average: %.2f\n", result);
    system("pause");
    return 0;
}