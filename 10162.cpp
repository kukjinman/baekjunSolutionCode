// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{

	//�����:�ּ� ��� ��� Ƚ��
	int Acount = 0;
	int Bcount = 0;
	int Ccount = 0;

	// ���ڷ����� ����(����:second)
	int A = 300;
	int B = 60;
	int C = 10;

	//�丮�ð� T
	int T = 0;

	//�Ұ��� ���� üũ flag
	bool impossibleFlag = false;

	cin >> T;

	while (T != 0)
	{

		if (T >= A)
		{
			//A��� ��� ���� ��
			Acount = T / A;
			//A��� ��� �� ������
			T = T % A;

		}
		else if (T >= B) {
            
			// B��� ��� ���� ��
			Bcount = T / B;
            // B��� ��� �� ������
			T = T % B;

		}
		else if (T >= C) {

            // C��� ��� ���� ��
			Ccount = T / C;
            // C��� ��� �� ������
			T = T % C;
		}
		else
		{

			if (T != 0)

			{
				// A,B,C�� ��� �������� �������� ����
				// T �� ������ �Ұ����� ���
				impossibleFlag = true;
				break;
			}
		}
	}

	//T ������ �Ұ��� ���� üũ �� 
	//���� ��� �� ��� �б⹮
	if (impossibleFlag == true)
	{
		cout << -1 << endl;
	}
	else {
		cout << Acount << " " << Bcount << " " << Ccount << endl;

	}
}