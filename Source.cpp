#include <iostream> 
#include <math.h> 

using namespace std;

//Для любого x вычислить значение функции
/*int main()
{
	setlocale(0, "");
	float x, y;
	cout << "\n Введите x - ";
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

//Задача про високосный год
/*int main()
{
	setlocale(0, "");
	int year;
	cout << " Введите год - ";
	cin >> year; 
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Остаток от деления на 4 и 400 равен нулю, деление на 100 с остатком
	{
		cout << " YES" << endl;
	}
	else
	{
		cout << " NO " << endl;
	}
	return 0;
}*/

//Задача про минимум из двух чисел
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
	cout << "\n Минимальное - " << a << endl;
	return 0;
}*/

//Задача про минимум из трёх чисел
/*int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "\n Введите a - ";
	cin >> a;
	cout << "\n Введите b - ";
	cin >> b;
	cout << "\n Введите c - ";
	cin >> c;
	if (b < a) 
	{
		a = b;
	}
	if (c < a)
	{
		a = c;
	}
	cout << "\n Минимальное - " << a << endl;
	return 0;
}*/

//Задача про One, Two, Three и Other
/*int main()
{
	setlocale(0, "");
	int x;
	cout << "\n Введите x - ";
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

//Даны три числа K, M и N.Поменять их значения местами таким образом, чтобы K < M < N.
/*int main()
{
	setlocale(0, "");
	int K, M, N; // K < M < N
	cout << "\n Введите число K - ";
	cin >> K;
	cout << "\n Введите число M - ";
	cin >> M;
	cout << "\n Введите число N - ";
	cin >> N;
	
	if (K > M) 
	{
        swap(K, M); //Меняем значения переменных местами
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

//Ход коня
/*int main()
{
	setlocale(0, "");
	int a, b, c, d;
	cout << "\n Введите номер столбца первой клетки - ";
	cin >> a;
	cout << "\n Введите номер строки первой клетки - ";
	cin >> b;
	cout << "\n Введите номер столбца второй клетки - ";
	cin >> c;
	cout << "\n Введите номер строки второй клетки - ";
	cin >> d;
	
	int dx = abs(c - a); //Разница по горизонтали
	int dy = abs(d - b); //Разница по вертикали

	if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) //Разница по горизонтали должны быть 1, а по вертикали - 2 или наоборот
	{
		cout << "\n YES" << endl;
	}
	else {
		cout << "\n NO" << endl;
	}
	return 0;
}*/

//Порядковый номер дня в году
/*int main()
{
	setlocale(0, "");
	int day;
	cout << "\n Введите порядковый номер дня в году -  ";
	cin >> day;

	int dayOfWeek = (day - 1) % 7; // Приводим к диапазону от 0 до 6

	switch (dayOfWeek)
	{
	case 0:
		cout << "\n День недели: Понедельник" << endl;
		break;
	case 1:
		cout << "\n День недели: Вторник" << endl;
		break;
	case 2:
		cout << "\n День недели: Среда" << endl;
		break;
	case 3:
		cout << "\n День недели: Четверг" << endl;
		break;
	case 4:
		cout << "\n День недели: Пятница" << endl;
		break;
	case 5:
		cout << "\n День недели: Суббота" << endl;
		break;
	case 6:
		cout << "\n День недели: Воскресенье" << endl;
		break;
	default:
		cout << "\n Ошибка ввода" << endl;
		break;
	}
	return 0;
}*/

int main()
{
    setlocale(0, "");
    int zadanie;
    cout << "\n 1 - Для любого x вычислить значение функции" << endl;
    cout << "\n 2 - Задача про високосный год" << endl;
    cout << "\n 3 - Задача про минимум из двух чисел" << endl;
    cout << "\n 4 - Задача про минимум из трёх чисел" << endl;
    cout << "\n 5 - Задача про One, Two, Three и Other" << endl;
    cout << "\n 6 - Даны три числа K, M и N.Поменять их значения местами таким образом, чтобы K < M < N" << endl;
    cout << "\n 7 - Ход коня" << endl;
    cout << "\n 8 - Порядковый номер дня в году" << endl;
    cout << "\n Выберите задание - ";
    cin >> zadanie;

    switch (zadanie)
    {
    case 1:
    {
        float x, y;
        cout << "\n Введите x - ";
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
        cout << " Введите год - ";
        cin >> year;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Остаток от деления на 4 и 400 равен нулю, деление на 100 с остатком
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
        cout << "\n Минимальное - " << a << endl;
    }
    break;

    case 4:
    {
        int a, b, c;
        cout << "\n Введите a - ";
        cin >> a;
        cout << "\n Введите b - ";
        cin >> b;
        cout << "\n Введите c - ";
        cin >> c;
        if (b < a)
        {
            a = b;
        }
        if (c < a)
        {
            a = c;
        }
        cout << "\n Минимальное - " << a << endl;
    }
    break;

    case 5:
    {
        int x;
        cout << "\n Введите x - ";
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
        cout << "\n Введите число K - ";
        cin >> K;
        cout << "\n Введите число M - ";
        cin >> M;
        cout << "\n Введите число N - ";
        cin >> N;

        if (K > M)
        {
            swap(K, M); //Меняем значения переменных местами
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
        cout << "\n Введите номер столбца первой клетки - ";
        cin >> a;
        cout << "\n Введите номер строки первой клетки - ";
        cin >> b;
        cout << "\n Введите номер столбца второй клетки - ";
        cin >> c;
        cout << "\n Введите номер строки второй клетки - ";
        cin >> d;

        int dx = abs(c - a); //Разница по горизонтали
        int dy = abs(d - b); //Разница по вертикали

        if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) //Разница по горизонтали должны быть 1, а по вертикали - 2 или наоборот
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
        cout << "\n Введите порядковый номер дня в году -  ";
        cin >> day;

        int dayOfWeek = (day - 1) % 7; // Приводим к диапазону от 0 до 6

        switch (dayOfWeek)
        {
        case 0:
            cout << "\n День недели: Понедельник" << endl;
            break;
        case 1:
            cout << "\n День недели: Вторник" << endl;
            break;
        case 2:
            cout << "\n День недели: Среда" << endl;
            break;
        case 3:
            cout << "\n День недели: Четверг" << endl;
            break;
        case 4:
            cout << "\n День недели: Пятница" << endl;
            break;
        case 5:
            cout << "\n День недели: Суббота" << endl;
            break;
        case 6:
            cout << "\n День недели: Воскресенье" << endl;
            break;
        default:
            cout << "\n Ошибка ввода" << endl;
            break;
        }
    }
    break;

    default:
    {
        cout << "\n Неверный выбор. Попробуйте еще раз." << endl;
        break;
    }
    return 0;
    }
}
