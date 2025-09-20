#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,sum=0,first[50][50],second[50][50],result[50][50];
    printf("Enter row and Column for first Matrix : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter row and Column for second Matrix : ");
    scanf("%d %d", &r2, &c2);

    while(c1!=r2)
    {
        printf("Error !!! column of first matrix not equal to row of second matrix.\n");
        printf("Enter row and Column for first Matrix : ");
        scanf("%d %d", &r1, &c1);

        printf("Enter row and Column for second Matrix : ");
        scanf("%d %d", &r2, &c2);
    }

    //Scanning for First and Second Matrix
    printf("Enter element for First Matrix.\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            scanf("%d", &first[i][j]);
    }

    printf("Enter element for Second Matrix.\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
            scanf("%d", &second[i][j]);
    }

    //Multiplying Matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //Printing for First and Second matrix
    printf("\nFirst matrix : \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
            printf("%d ", first[i][j]);
        printf("\n");
    }
    printf("\nSecond Matrix : \n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d ", second[i][j]);
        printf("\n");
    }

    printf("\nResult Matrix : \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }


    return 0;
}

/* Output ->

Enter row and Colum for first Matrix : 3 2
Enter row and Colum for second Matrix : 2 3
Enter element for First Matrix.
1 2 3 4 5 6
Enter element for Second Matrix.
1 2 3 4 5 6

First matrix :
        1 2
        3 4
        5 6

Second Matrix :
        1 2 3
        4 5 6

Result Matrix :
        9 12 15
        19 26 33
        29 40 51
*/
