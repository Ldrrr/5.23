int f(int x)
{
    int s=0;
    while(x)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}
int addDigits(int num)
{
    while(num>9)
    {
        num=f(num);
    }
    return num;
}
