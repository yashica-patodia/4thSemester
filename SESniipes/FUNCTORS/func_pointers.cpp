#include <stdio.h>
int (*pt2Function)(int, char, char);
int DoIt(int a, char b, char c);
int main()
{
    pt2Function = DoIt; // &DoIt
    char c1='a';
    char c2='b';
    int result = (*pt2Function)(12, c1, 'b');
    printf("%d", result);
    return 0;
}
int DoIt(int a, char b, char c)
{
    printf("DoIt\n");
    return a + b + c;
}