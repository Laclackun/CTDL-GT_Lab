int combine(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return combine(n - 1, k) + combine(n - 1, k - 1); // Binary Recursion
}
