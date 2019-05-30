#include "EvenNumber.h"

EvenNumber::EvenNumber()
{
    data = 0;
}

EvenNumber::EvenNumber(int value)
{
    if (value % 2 != 0)
    {
        value = 0;
    }
    else 
    {
        data = value;
    }
}

EvenNumber::getNext()
{
    return EvenNumber(value + 2);
}

EvenNumber::getPrevious()
{
    return EvenNumber(value - 2);
}
int EvenNumber::getValue()
{
    return data;
}

