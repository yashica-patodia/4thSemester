int AdderFunction(int a, int b)
{
    return a + b;
}
class AdderFunctor
{
public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};
void main()
{
    int x = 5;
    int y = 7;
    int z = AdderFunction(x, y);
    AdderFunctor aF;
    int w = aF(x, y); // aF.operator()(x, y);
}