#include "stdafx.h"

// ���������� ��������
struct SomeStructName
{
	// ���������� ����� ���������� ����������������
	int fieldName;
};

// ��������� (�.�. �� ���������� ������ ������) ������� 
// ��� ������� ���������� ���������������� � ��������� �����
// ��������� ������� ���������� ���������������� � ��������� �����
// ����� ������ ������� � ����������� ��������� ������ �� ��������
void FreeFunction(int someParam1)
{
	// ��������� ���������� ���������� ����������������
	int someLocalVariable = someParam1 * 3;

	// ����� �������� ������ � ����������� ������� �������� ������
	if (someParam1 > 0)
	{// �������� ����������� ������������� � ������ ����

	}
	else
	{

	}
}

int main(int argc, char* argv[])
{
	SomeStructName s;
	s.fieldName = 5;
	return 0;
}
