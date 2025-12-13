int countOne(int num)
{
    int count = 0;

    while (num != 0)
    {
        if (num & 1)      
            count++;

        num = num >> 1;   
    }

    return count;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of 1 bits = %d\n", countOne(n));

    return 0;
}
