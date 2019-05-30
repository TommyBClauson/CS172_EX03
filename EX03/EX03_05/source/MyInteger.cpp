#include <iostream>

using namespace std;

    class MyInteger
    {
    private:
        int data;
    
    public:
        MyInteger(int value)
        {
            data = value;
        }
        int getValue()
        {
            return data;
        }
        
        bool isPrime()
        {
            return isPrime(data);
        }

        static bool isPrime(MyInteger& x)
        {
            return isPrime(x.getValue());
        }

        static bool isPrime(int num)
        {
            if (num == 1 || num == 2){
                for (int i = 2; i <= num / 2; i++)
                {
                    if (num % i == 0)
                    {
                        return false;
                    }
                }
            }
            else
            {
                return true;
            }

        }

        static bool isEven(int n)
        {
            return n % 2 == 0;
        }

        bool isEven() const
        {
            return isEven(data);
        }

        static bool isEven(MyInteger& x)
        {
            return isEven(x.getValue());
        }

        bool equals(MyInteger& x)
        {
            return data == x.getValue();
        }

        bool equals(const int anotherNum)
        {
            return anotherNum == data;
        } 
};

int main()
{
    MyInteger x1(5);
    cout << "X1 is even? " << x1.isEven() << endl;
    cout << "X1 is prime? " << x1.isPrime() << endl;
    cout << "5 is prime? " << MyInteger::isPrime(5) << endl;


    return 0;
}