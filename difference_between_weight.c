#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of people: ");
    scanf("%d", &N);
    

    int weight[N], min_weight, max_weight;
    printf("Enter weight 1: ");
    scanf("%d", &weight[0]);
    min_weight = weight[0];
    max_weight = weight[0];

    for (int i = 1; i < N; i++) {
        printf("Enter your weight in kilograms: ");
        scanf("%d", &weight[i]);

        if (weight[i] < min_weight) {
            min_weight = weight[i];
        }

        if (weight[i] > max_weight) {
            max_weight = weight[i];
       }
    }
     printf("Maximum difference: %d kg\n", max_weight - min_weight);
}