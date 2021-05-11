#include<stdio.h>

void towerOfHanoi(int n , char from_rod , char aux_rod, char to_rod)
{
    if( n == 1 )
    {
        printf("\n Move Disk 1 from %c to %c",from_rod, to_rod);
        return;
    }
    towerOfHanoi( n - 1 , from_rod , aux_rod,  to_rod );
    printf("\n Move Disk %d from rod %c to rod %c", n ,from_rod, to_rod);
    towerOfHanoi( n - 1 , aux_rod , to_rod ,from_rod);
}    

int main()
{
    int n = 3;      // no of disks
    char A , B , C;
    towerOfHanoi(n , 'A', 'B', 'C');
    return 0;
}
