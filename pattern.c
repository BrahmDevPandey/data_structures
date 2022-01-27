main()
{
    system("clear");
    int num = 0, i, j;
    printf("Enter num: ");
    scanf("%d", &num);

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            (i == 2 && j == 2) ? printf("%d ", num - 1) : printf("%d ", num);
        }
        printf("\n");
    }
}