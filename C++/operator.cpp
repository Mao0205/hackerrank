//修改output
ostream& operator << (ostream &out, Complex c)
{
    out << c.a << "+i" << c.b;
    return out;
}
