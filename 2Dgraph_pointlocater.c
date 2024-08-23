
#include <stdio.h>

void graph(int x, int y) {
  
    for (int i = -11; i < 12; i++) {
        for (int j = -30; j < 31; j++) { // increased the scale of x to match the lentgh of '-' to y's '|'.
            if (j == -30 && i == 0) {
                printf("<");
            } else if (j == 30 && i == 0) {
                printf(">");
            } else if (j == 2*x && i == -y && x >= 0) {
                printf(".(%d,%d)", x, y);
                j = j + 6;
            } else if (j == 2*x - 6 && i == -y && x < 0 && y >= 0) {
                printf("(%d,%d).", x, y);
                j += 6;
            } else if (j == 2*x - 7 && i == -y && x < 0 && y < 0) {
                printf("(%d,%d).", x, y);
                j += 7;
            } else if (i == 0) {
                printf("-");
            } else if (i == -11 && j == -2) {
                printf(" /|\\");
                j += 6;
            } else if (i == 11 && j == -2) {
                printf(" \\|/\n");
                j += 6;
            } else if (j == 0) {
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("The scale of x-ordinate is 2 times of y\n\n");
}

int main() {
    int x, y;
    char command = 'Y';
    while (command == 'Y' || command == 'y') {
        printf(" Enter the co-ordinates of the point (integers between -9 & 9, with a space) to be printed: ");
        scanf("%d %d", &x, &y);
        
        // Check if input coordinates are within the allowed range
        if (x < -9 || y < -9 || x > 9 || y > 9) {
            printf("Limit of input exceeded\n");
            continue;
        }
        
        // Call the graph function to plot the points
        graph(x, y);
        
        printf("Do you want to continue (Y for continue)? ");
        scanf(" %c", &command);  // Add space before %c to consume the newline character
    }
    
    return 0;
}
