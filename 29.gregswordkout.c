// 29. A. Greg's Workout (255)
#include <stdio.h>
 
int main() {
    int n, i, exercise, chest = 0, biceps = 0, back = 0;
    scanf("%d", &n);
 
    for (i = 0; scanf("%d", &exercise), i < n; i++)
        (i % 3 == 0) ? (chest += exercise) : (i % 3 == 1) ? (biceps += exercise) : (back += exercise);
 
    printf(chest > biceps && chest > back ? "chest" : biceps > chest && biceps > back ? "biceps" : "back");
 
    return 0;
}
