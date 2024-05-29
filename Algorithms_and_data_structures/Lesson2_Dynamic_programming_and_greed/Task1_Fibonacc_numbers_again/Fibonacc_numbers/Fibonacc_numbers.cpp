#include <iostream>

int Fiba(int Value)
{
    if (Value == 0)
    {
        return 0;
    }
    if (Value == 1)
    {
        return 1;
    }
    return Fiba(Value - 1) + Fiba(Value - 2);
}
int main()
{
    std::cout << "Enter the number of Fibonacci numbers: \n";
    int Value;
    int size;
    std::cin >> size;
    if (size <= 0)
    {
        std::cout << "Wrong value!";
    }
    else if (size > 0)
        std::cout << "Fibonacci sequence: \n";
    for (int i = 0; i < size; i++)
    {
        Value = Fiba(i);
        std::cout << Value << " ";
    }
    return 0;
}

/*������ �(1) �.�. �� �� ����������� �������������� ������.
�������� �(n^2) ��������� ���������� ������� Fiba ������������� � �������������� ���������� (����� �� ������ ����), ���� ����������������.*/
