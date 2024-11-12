#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int game[4][4] = {
        {15, 2, 6, 9},
        {1, 7, 11, 8},
        {14, 3, 10, 12},
        {5, 4, 13, 0}
    };
    
    int LocRow = 3, LocCol = 3;
    char chk = ' ';
    
    while (chk != 'q') {
        for (int i = 0; i < 4; i++) {
            printf("| ");
            for (int j = 0; j < 4; j++) {
                printf("%d | ", game[i][j]);
            }
            printf("\n");
        }
        
        printf("Enter 'w', 'a', 's', 'd' to move, 'q' to quit: ");
        scanf(" %c", &chk);

        if (chk == 'w' && LocRow < 3) {
            swap(&game[LocRow][LocCol], &game[LocRow + 1][LocCol]);
            LocRow += 1;
        }
        else if (chk == 's' && LocRow > 0) {
            swap(&game[LocRow][LocCol], &game[LocRow - 1][LocCol]);
            LocRow -= 1;
        }
        else if (chk == 'a' && LocCol < 3) {
            swap(&game[LocRow][LocCol], &game[LocRow][LocCol + 1]);
            LocCol += 1;
        }
        else if (chk == 'd' && LocCol > 0) {
            swap(&game[LocRow][LocCol], &game[LocRow][LocCol - 1]);
            LocCol -= 1;
        }
    }

    return 0;
}
