#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
int main()
{
    char D, E, F;
    int n = 3; // Number of disks
    printf("Which tower would you like to start with? ");
    scanf("%c", &D);
    printf("\nWhich tower would you like to end with? ");
    scanf("%c", &E);
    printf("\nWhich tower would you like to be the helping tower? ");
    scanf("%c", &F);
    towerOfHanoi(n, D, E, F);  // A, B and C are names of rods
    return 0;
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}


