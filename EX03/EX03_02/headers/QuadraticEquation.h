class QuadraticEquation
{
    public:
        QuadraticEquation(double newA, double newB, double newC);
        double getA(double a);
        double getB(double b);
        double getC(double c);
        double getDiscriminant(double temp);
        double getRoot1(double r1);
        double getRoot2(double r2);
    
    private:
        double a, b, c;
};