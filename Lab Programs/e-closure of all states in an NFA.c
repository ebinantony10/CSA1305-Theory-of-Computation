#include <stdio.h>

int n;
int eclosure[20][20];
int visited[20];

void findClosure(int state) {
    int i;

    visited[state] = 1;
    eclosure[state][state] = 1;

    for (i = 0; i < n; i++) {
        if (eclosure[state][i] && !visited[i]) {
            findClosure(i);
        }
    }
}

int main() {
    int i, j, m;
    int from, to;

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &m);

    // Initialize matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            eclosure[i][j] = 0;

    printf("Enter epsilon transitions (from to):\n");

    for (i = 0; i < m; i++) {
        scanf("%d %d", &from, &to);
        eclosure[from][to] = 1;
    }

    // Find epsilon closure for each state
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            visited[j] = 0;

        findClosure(i);

        printf("Epsilon-closure(q%d) = { ", i);

        for (j = 0; j < n; j++) {
            if (eclosure[i][j] && visited[j])
                printf("q%d ", j);
        }

        printf("}\n");
    }

    return 0;
}
