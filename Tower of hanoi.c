//
//  main.c
//  tower of honai
//
//  Created by Santosh Raj on 03/03/2024.
//

#include <stdio.h>


void towerOfHanoi(int n, char source, char destination  , char aux )
{
    if (n == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", source, destination);
        return;
    }
    
    towerOfHanoi(n-1, source, aux, destination);
    printf("\n Move disk %d from peg %c to peg %c", n,source,destination);
    towerOfHanoi(n-1,aux ,destination ,source );
}

int main()
{
    int n ;
    printf("enter the no . disk ");
    scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}

