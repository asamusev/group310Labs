int IntCast(int x, float y, double z, unsigned short k)
{
    int i = (x+(int)y)*(int)z+(int)k;
    return i;
}
unsigned int UnIntCast(int x, float y, double z, unsigned short k)
{
    unsigned int ui = (unsigned int)x/(unsigned int)y +(unsigned int)k;
    return ui;
}
short FloatCast(int x, float y, double z, unsigned short k)
{
    short s = (short)x%((short)x/(short)y);
    return s;
}
double DoubleCast(int x, float y, double z, unsigned short k)
{
    int z1 = (double)x*(double)y+z/(double)x;
    return z1;
}
unsigned short ShortCast(int x, float y, double z, unsigned short k)
{
    unsigned short k1 = (short)x-(short)y/(short)z/y;
    return k1;
}
