#include <iostream> 
#include <math.h> 

using namespace std;

//��� ������ x ��������� �������� �������
/*int main()
{
	setlocale(0, "");
	float x, y;
	cout << "\n ������� x - ";
	cin >> x;
	if (x <= 1)
	{
		y = 1;
	}
	else if (x < 5)
	{
		y = x * x;
	}
	else
	{
		y = sqrt(x) + 1;
	}
	cout << " x = " << x << " y = " << y;
	return 0;
} */

//������ ��� ���������� ���
/*int main()
{
	setlocale(0, "");
	int year;
	cout << " ������� ��� - ";
	cin >> year; 
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // ������� �� ������� �� 4 � 400 ����� ����, ������� �� 100 � ��������
	{
		cout << " YES" << endl;
	}
	else
	{
		cout << " NO " << endl;
	}
	return 0;
}*/

//������ ��� ������� �� ���� �����
/*int main()
{
	setlocale (0, "");
	int a, b;
	cout << "\n a - ";
	cin >> a;
	cout << "\n b - ";
	cin >> b;
	if (b < a)
	{
		a = b;
	}
	cout << "\n ����������� - " << a << endl;
	return 0;
}*/

//������ ��� ������� �� ��� �����
/*int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "\n ������� a - ";
	cin >> a;
	cout << "\n ������� b - ";
	cin >> b;
	cout << "\n ������� c - ";
	cin >> c;
	if (b < a) 
	{
		a = b;
	}
	if (c < a)
	{
		a = c;
	}
	cout << "\n ����������� - " << a << endl;
	return 0;
}*/

//������ ��� One, Two, Three � Other
/*int main()
{
	setlocale(0, "");
	int x;
	cout << "\n ������� x - ";
	cin >> x;
	if (x == 1)
	{
		cout << "\n One " << endl;
	}
	else if (x == 2)
	{
		cout << "\n Two " << endl;
	}
	else if (x == 3)
	{
		cout << "\n Three " << endl;
	}
	else
	{
		cout << "\n Other " << endl;
	}
	return 0;
}*/

//���� ��� ����� K, M � N.�������� �� �������� ������� ����� �������, ����� K < M < N.
/*int main()
{
	setlocale(0, "");
	int K, M, N; // K < M < N
	cout << "\n ������� ����� K - ";
	cin >> K;
	cout << "\n ������� ����� M - ";
	cin >> M;
	cout << "\n ������� ����� N - ";
	cin >> N;
	
	if (K > M) 
	{
        swap(K, M); //������ �������� ���������� �������
    }
    if (M > N)
	{
        swap(M, N);
    }
    if (K > M) 
	{
        swap(K, M);
    }
	cout << "\n " << K << " < " << M << " < " << N << endl;
	return 0;
}*/

//��� ����
/*int main()
{
	setlocale(0, "");
	int a, b, c, d;
	cout << "\n ������� ����� ������� ������ ������ - ";
	cin >> a;
	cout << "\n ������� ����� ������ ������ ������ - ";
	cin >> b;
	cout << "\n ������� ����� ������� ������ ������ - ";
	cin >> c;
	cout << "\n ������� ����� ������ ������ ������ - ";
	cin >> d;
	
	int dx = abs(c - a); //������� �� �����������
	int dy = abs(d - b); //������� �� ���������

	if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) //������� �� ����������� ������ ���� 1, � �� ��������� - 2 ��� ��������
	{
		cout << "\n YES" << endl;
	}
	else {
		cout << "\n NO" << endl;
	}
	return 0;
}*/

//���������� ����� ��� � ����
/*int main()
{
	setlocale(0, "");
	int day;
	cout << "\n ������� ���������� ����� ��� � ���� -  ";
	cin >> day;

	int dayOfWeek = (day - 1) % 7; // �������� � ��������� �� 0 �� 6

	switch (dayOfWeek)
	{
	case 0:
		cout << "\n ���� ������: �����������" << endl;
		break;
	case 1:
		cout << "\n ���� ������: �������" << endl;
		break;
	case 2:
		cout << "\n ���� ������: �����" << endl;
		break;
	case 3:
		cout << "\n ���� ������: �������" << endl;
		break;
	case 4:
		cout << "\n ���� ������: �������" << endl;
		break;
	case 5:
		cout << "\n ���� ������: �������" << endl;
		break;
	case 6:
		cout << "\n ���� ������: �����������" << endl;
		break;
	default:
		cout << "\n ������ �����" << endl;
		break;
	}
	return 0;
}*/

int main()
{
    setlocale(0, "");
    int zadanie;
    cout << "\n 1 - ��� ������ x ��������� �������� �������" << endl;
    cout << "\n 2 - ������ ��� ���������� ���" << endl;
    cout << "\n 3 - ������ ��� ������� �� ���� �����" << endl;
    cout << "\n 4 - ������ ��� ������� �� ��� �����" << endl;
    cout << "\n 5 - ������ ��� One, Two, Three � Other" << endl;
    cout << "\n 6 - ���� ��� ����� K, M � N.�������� �� �������� ������� ����� �������, ����� K < M < N" << endl;
    cout << "\n 7 - ��� ����" << endl;
    cout << "\n 8 - ���������� ����� ��� � ����" << endl;
    cout << "\n �������� ������� - ";
    cin >> zadanie;

    switch (zadanie)
    {
    case 1:
    {
        float x, y;
        cout << "\n ������� x - ";
        cin >> x;
        if (x <= 1)
        {
            y = 1;
        }
        else if (x < 5)
        {
            y = x * x;
        }
        else
        {
            y = sqrt(x) + 1;
        }
        cout << " x = " << x << " y = " << y << endl;
    }
    break;

    case 2:
    {
        int year;
        cout << " ������� ��� - ";
        cin >> year;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // ������� �� ������� �� 4 � 400 ����� ����, ������� �� 100 � ��������
        {
            cout << " YES" << endl;
        }
        else
        {
            cout << " NO " << endl;
        }
    }
    break;

    case 3:
    {
        int a, b;
        cout << "\n a - ";
        cin >> a;
        cout << "\n b - ";
        cin >> b;
        if (b < a)
        {
            a = b;
        }
        cout << "\n ����������� - " << a << endl;
    }
    break;

    case 4:
    {
        int a, b, c;
        cout << "\n ������� a - ";
        cin >> a;
        cout << "\n ������� b - ";
        cin >> b;
        cout << "\n ������� c - ";
        cin >> c;
        if (b < a)
        {
            a = b;
        }
        if (c < a)
        {
            a = c;
        }
        cout << "\n ����������� - " << a << endl;
    }
    break;

    case 5:
    {
        int x;
        cout << "\n ������� x - ";
        cin >> x;
        if (x == 1)
        {
            cout << "\n One " << endl;
        }
        else if (x == 2)
        {
            cout << "\n Two " << endl;
        }
        else if (x == 3)
        {
            cout << "\n Three " << endl;
        }
        else
        {
            cout << "\n Other " << endl;
        }
    }
    break;

    case 6:
    {
        int K, M, N; // K < M < N
        cout << "\n ������� ����� K - ";
        cin >> K;
        cout << "\n ������� ����� M - ";
        cin >> M;
        cout << "\n ������� ����� N - ";
        cin >> N;

        if (K > M)
        {
            swap(K, M); //������ �������� ���������� �������
        }
        if (M > N)
        {
            swap(M, N);
        }
        if (K > M)
        {
            swap(K, M);
        }
        cout << "\n " << K << " < " << M << " < " << N << endl;
    }
    break;

    case 7:
    {
        int a, b, c, d;
        cout << "\n ������� ����� ������� ������ ������ - ";
        cin >> a;
        cout << "\n ������� ����� ������ ������ ������ - ";
        cin >> b;
        cout << "\n ������� ����� ������� ������ ������ - ";
        cin >> c;
        cout << "\n ������� ����� ������ ������ ������ - ";
        cin >> d;

        int dx = abs(c - a); //������� �� �����������
        int dy = abs(d - b); //������� �� ���������

        if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) //������� �� ����������� ������ ���� 1, � �� ��������� - 2 ��� ��������
        {
            cout << "\n YES" << endl;
        }
        else {
            cout << "\n NO" << endl;
        }
    }
    break;

    case 8:
    {
        int day;
        cout << "\n ������� ���������� ����� ��� � ���� -  ";
        cin >> day;

        int dayOfWeek = (day - 1) % 7; // �������� � ��������� �� 0 �� 6

        switch (dayOfWeek)
        {
        case 0:
            cout << "\n ���� ������: �����������" << endl;
            break;
        case 1:
            cout << "\n ���� ������: �������" << endl;
            break;
        case 2:
            cout << "\n ���� ������: �����" << endl;
            break;
        case 3:
            cout << "\n ���� ������: �������" << endl;
            break;
        case 4:
            cout << "\n ���� ������: �������" << endl;
            break;
        case 5:
            cout << "\n ���� ������: �������" << endl;
            break;
        case 6:
            cout << "\n ���� ������: �����������" << endl;
            break;
        default:
            cout << "\n ������ �����" << endl;
            break;
        }
    }
    break;

    default:
    {
        cout << "\n �������� �����. ���������� ��� ���." << endl;
        break;
    }
    return 0;
    }
}
