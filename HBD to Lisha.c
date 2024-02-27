/*HBD to Lisha*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" Welcome\n\n");

    int num;
    printf(" Enter your Birthday and hit the Enter key: ");
    scanf("%d", &num);

    //If the user types 27 as input.
    if(num == 27)
    {
        printf(" \n\n");
        printf("    <> <> <>   \n");
        printf("    || || ||   \n");
        printf("   ----------  \n");
        printf("   |________|  \n");
        printf("   |________|  \n");
        printf("  ^^^^^^^^^^^^ \n\n");

        printf(" Happy Birthday to You\n");
        printf(" Happy Birthday to You\n");
        printf(" Happy Birthday Dear Lisha\n");
        printf(" Happy Birthday to You.\n\n");

        printf(" Press any key to continue.\n\n\n");
        printf(" Version 1.0.0\n");
        printf(" Developed by Julian Leon Baroi.\n");
        printf(" Copyright 2023 Julian Leon Baroi. All rights reserved.\n");
        getch();
    }

    //If the user types other character/s or number/s as input.
    else
    {
        printf(" \n\n");
        printf(" Something went wrong\n\n");
        printf(" You can wait a bit and try again or restart your device. That may help.\n");
        printf(" Error code: 0x27L02023\n\n");

        printf(" Press any key to continue.\n\n\n");
        printf(" Version 1.0.0\n");
        printf(" Developed by Julian Leon Baroi.\n");
        printf(" Copyright 2023 Julian Leon Baroi. All rights reserved.\n");
        getch();
    }

    return 0;
}
