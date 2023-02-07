#include <iostream>
#include <ctime>
#include <string>
using namespace std;

/*

\n перейти на начало новой строик
\t перейти к следующей табуляции
\" вывести двойную кавычку
\' вывести одинарную кавычку
\\ вывести обратную черту
пример cout << "\"Привет!\'"

*/
class Human
{
public:

    int age;
    int weight;
    string name;

    void Print()
    {
        cout << "Имя " << name << "\nВес " << weight << "\nВозраст " << endl;
    }
};

class Point
{
public:

    int x;
    void Print()  //так как функция принадлежит классу, она видит y и z, но вне класса их использовать не можем
    {
        cout << x << endl << y << endl << z << endl;
        PrintB();        //таким образом мы выведем функцию, учитывая что она находится в private
    }

private:

    int y;
    int z;

    void PrintB()
    {
        cout << "B" << endl;
    }
};

class Point76
{
private:
    int x;
    int y;

public:

    Point76(int valueX, int ValueY)
    {
        x = valueX;
        y = ValueY;
    }

    int GetX()
    {
        return x;
    }

    void SetX(int ValueX)
    {
        x = ValueX;
    }

    void Print()
    {
        cout << "x = " << x << "\t y = " << y << endl;
    }
};

class CoffeGrinder
{
private:
    
    bool CheckVoltage()
    {
        return true;
    }

public:
    void Start()
    {

        if (CheckVoltage())
        {
            cout << "...Working..." << endl;
        }
        else
        {
            cout << "Beep Beep" << endl;
        }

    }



};
/*   
     //урок 33
int Sum(int a, int b)
{
    int result;

    result = a + b;

    return result;
}

     //урок 34.
int Foo(int a)
{
   return a++;
}

     // урок 35.
void Fillarray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void Printarray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}


     //урок 36
void foo();

void foo()
{
    cout << "функция вызвана" << endl;
}


     //урок 38
void foo(int a = 5)
{
    for (int i = 0; i < a; i++)
    {
        cout << "#" << endl;
    }
}


      //урок 39
inline int Sum(int a, int b)
{
    return a + b;
}


      //урок 40
int Sum(int a, int b, int c)
{
    return a + b + c;
}

int Sum(int a, int b)
{
    return a + b;
}

double Sum(double a, double b)
{
    return a + b;
}


     //урок 41.
template <typename T1, typename T2>

T1 Sum(T1 a, T2 b)
{
    return a + b;
}


    //урок 43.
int Foo(int a)
{
    if (a < 1)
        return a;

    a--;
    cout << a << endl;

    return Foo(a);
}


     //урок 44. Рекурсия. Факториал
int Fact(int N)
{
    if (N == 0)
        return 0;

    if (N == 1)
        return 1;

    return N * Fact(N - 1);
}

    //Урок 48.

void Foo(int* pa)
{
    (*pa)++;
}

     //Урок 49.
void Foo(int *pa, int *pb, int *pc)
{
    (*pa) = 546;

    (*pb)++;

    (*pc) = -20;
}


      //Урок 51. Передача ссылок в функцию.

void Foo(int a)
{
    a = 1;
}

void Foo2(int &a)
{
    a = 2;
}

void Foo3(int *a)
{
    *a = 3;
}


       //урок 52.

void Foo(int& a, int& b, int& c)
{
    a = 10;
    b *= 3;
    c -= 100;
}


        //Урок 57, 58, 59. Констанытные параметры функции. 

void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout << endl;
}

         // урок 59. Изменение размера массива. + урок выше.

void push_back(int*& arr, int& size,const int value)     //функция добавления последнего числа в массив
{
    int* newArray = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[size] = value;

    size++;

    delete[] arr;
    
    arr = newArray;
}

void pop_back(int*& arr, int& size)    //функция убирающая последнее число массива
{
    size--;

    int* newArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }

    delete[] arr;

    arr = newArray;
}


            //Урок 65. Указатель на функцию в качестве параметра.

string GetDataFromBD()       //функция отечающая за запрос данных из БД
{
    return "Data from BD";
}

string GetDataFromWeServer()   //функция с данными с веб
{
    return "Data from Web server";
}

void ShowInfo(string(*Foo)())    //функция выводящая информацию из нужной функции
{
    cout << Foo() << endl;        
}
*/









void main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Rus"); //функция отвечающая за вывод руских символов
    cout << "Привет!" << endl; //вывод в консоль

    /* урок 4 типы данных

    числа с плавающей точкой:
    float  4 байта  (вещественные числа одинарной точности)
    double  8 байта  (описывает вещественные числа двойной точности)
    целые числа:
    int  4 байта  (описывает целые числа от -2 147 483 648 до 2 147 483 648)
    short 2 байта (описывает короткие целые числа от - 32 768 до 32 768)
    символьный тип:
    char  1 байт (описывает символы)
    логический тип:
    bool  1 байт (описывает логические значения true/false)
    */
    /*
        //урок 5

        int age = 5,b;
        double a = 1.1551;
        b = 2;

        cout << age << endl;
        age = 10;
        cout << age << endl;

        cout << age << " " << a << b << endl;

        // урок 6. Константы

        const int COUNT_DAYS_IN_WEEK = 7;
        const char NEW_LINE = '\n'; // char может содержать один символ, но \n другие ESC последовательности считаются за один символ

        cout << COUNT_DAYS_IN_WEEK << NEW_LINE;

        // урок 7. ввод данных

        int Var1, Var2;

        cout << "Введите два числа: ";
        cin >> Var1>>Var2;
        cout << "Сумма ваших чисел равна: " << Var1 + Var2;


        // урок 8. Операторы

        int a8 = 5;
        cout << -a8 << endl;
        a8 = -a8;
        cout << -a8 << endl;

        int b8 = 7, c8 = 12, d8;
        d8 = b8 * c8;
        cout << d8 << endl;

        // урок 9. Инкремент и дикремент

        int a9 = 1;
        cout << a9 << endl;

        cout << a9++ << endl; //приоритет у cout больше чем у инкремента a9++

        cout << ++a9 << endl; // если записать в префиксной форме приоретет больше у ++a9
        cout << ++a9 * a9 << endl; //приоритет больше чем у умножения и тд.

        // урок 10. Сокращенные арифметические формы

        int a10 = 1;

        a10 += 10;   // использование этих форм - хороший тон
        a10 -= 10;
        a10 *= 10;
        a10 /= 10;

        // урок 11. Логические операции

         1) операторы сравнения
        >, <, >=, <=

         2) Операторы равенства
         == -  равно
         !=  - не равно

        3) операторы объединения и отрицательная инверсия
        && - и
        ||  - или
        !=  - не

        int Var1, Var2;
        cout << "Введите 2 числа для сравнения:" << endl;
        cin >> Var1 >> Var2;
        cout << ((Var1 > Var2) && (5 > 4)) << endl;

        // Урок 12. If else

        int Var12;

        cout << "Введите ваш возраст" << endl;
        cin >> Var12;

        if (Var12>18)
        {
            cout << "вы можете купить пиво!" << endl;
        }
        else if (Var12== 18)
        {
            cout << "добро пожаловать, новобранец" << endl;
        }
        else
        {
            cout << "сначала подрости" << endl;
        }

        //урок 13. switch
    int a13;
    cin >> a13;

    switch (a13)
    {
    case 1:
    {
        cout << "вы ввели 1" << endl;
    }
        break;
    case 3:
        cout << "вы ввели 2" << endl;
        break;
    default:
        cout << "другое число" << endl;
        break;
    }

        //урок 14. Цикл while
    int a14 = 1;

    while (a14 < 10)
    {
        cout << "Текст вывеведен на экран " << a14 << "раз" << endl;
        a14++;
    }

        // урок 15. do while
    int a15 = 1;

    do
    {
        cout << "Текст вывеведен на экран " << a15 << "раз" << endl;
        a15++;

    } while (a15 < 10);


        //урок 16. цикл for.
    for (int i = 0; i < 10; i++)
    {
        cout << "i равна " << i << endl;
    }

        //урок 17. цикл for фишки
    int a17 = 0;

    cout << "первый цикл" << endl;
    for (; a17 < 10; a17++)
    {
        cout << "переменная равна " << a17 << endl;
    }

    cout << "второй цикл" << endl;
    for (; a17 < 20; a17+=2)
    {
        cout << "переменная равна " << a17 << endl;
    }

        for (int i17 = 0, l17 = 10; i17 < 10 && l17 != 5; i17++, l17--)
        {
            cout << "переменная i17 = " << i17 << endl;
            cout << "переменная j17 = " << l17 << endl;
        }

         // урок 18. Ключевое слово break.
    cout << "начало цикла" << endl;

    for (int i18 = 0; i18<10 ; i18++)
    {
        cout << "переменная цикла равна " << i18 << endl;

        if (i18 == 5)
        {
            break;
        }
    }
    cout << "конец цикла" << endl;


         //урок 19. ключевое слово continue
        for (int i19 = 0; i19 < 10; i19++)
        {
            if (i19 == 5)
            {
                continue;
            }

            cout << "переменная цикла равна " << i19 << endl;

        }

        //урок 22. Оператор перехода goto.  //не рекомендуется к частому использованию т.к. усложняет чтение кода

    cout << "один" << endl;

    goto link;

    cout << "два" << endl;

    cout << "три" << endl;

    link:

    cout << "четыре" << endl;

    cout << "пять" << endl;


         //Урок 23. Отладка.
    //запустить отладку - fn+f5
    //поставить точку - f9

    int Sum(int a23, int b23);

    int a23 = 5;

    int b23 = 10;

    int c;

    c = a23 + b23;

    cout << c << endl;

        // урок 24. Вложенные циклы

    for (int i24 = 1; i24 < 5; i24++)
    {
        cout << "переменная i24 =" << i24 << endl;

        for (int j24 = 1; j24 < 5; j24++)
        {
            cout << "\tсработал второй цикл for итерации № " << j24 << endl;
        }
    }

        //урок 25. Массив. Array
    //нумерация элементов в массиве начинается с 0
    //тип_данных имя [количество элементов];

    int arr[4];

    arr[0] = 5;
    arr[1] = 7;
    arr[2] = 11;
    arr[3] = 1843;

    cout << arr[0] << endl;


       // урок 26. Инициализация массива.

    int arr[] { 5,86,1244,66,87 };

       // урок 27. Вывод массива.

    const int size = 10;
    int arr1[size];

    for (int i = 0; i < size; i++)
    {
       arr1[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << endl;
    }

        //урок 28. sizeof array.

        int arr[]{ 4234,45,756,88,56,3456,77,9 };

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<endl;
    }

        //урок 29. Генератор случайных числел rand.

    srand(time(NULL)); //srand - отправная точка, меняющая исход работы алгаритма rand

    int const SIZE = 10;
    //int a = rand() %100 + 50;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << endl;
    }

        //урок 31. Двумерные массивы

    const int ROW = 3; // компилятор сам посчитает количество строк
    const int COL = 4; // необходимо инициализировать обязательно

    int arr[][COL]
    {
        {1,6,8,423},
        {213,4,75,7},
        {534,6,7,8},
    };

    arr[2][3] = 76;

    cout << arr[2][3] << endl;

    //урок 32. Заполнение и вывод двумерных массивов

    const int ROWS = 5;
    const int COLS = 8;

    int arr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

          //урок 33. Функции

int n = 32;
int m = 14;

cout << Sum(n,m) << endl;


           //урок 34. Параметры функции.

int value = 1;

value = Foo(value);

cout << value << endl;

        //урок 35. Передача массива в функцию

const int SIZE = 10;
int mass[SIZE];


Fillarray(mass, SIZE);
Printarray(mass, SIZE);


          //урок 36. прототипы функий - в начале программы пишем void foo(), а саму функцию можем описать в другом месте

foo();

          //урок 37. область видимости. Глобальные и локальные переменные.

    {} - область видимости, всё что внутри каждых {} - попадает в область видимости.

    for (;;;)
    {
    int i             //в этом случае область видимости переменной i ограничена циклом for
    }

    //глобальные переменные - стоят в начале программы, вне функций


          //урок 38. Параметры по умолчанию.

foo();  //не обязательно указывать параметр при выводе функции, так как есть параметр по умолчанию в самой функции
        //если при выводе указать параметр, то цикл выведется с ним
        // если в функции несколько параметров, сначала объявляются без значения по умолчанию


          //урок 39. Ключевое слово inline
     //inline встраивает функцию в код, приходится тратить меньше времени на выполнение кода
     //используется для простых функций, чуть больше весит программа


           //урок 40. Перегрузка функций.

    //можно менять как параметры функции так и её реализацию
cout << Sum(5, 6) << endl;
cout << Sum(4, 26, 515) << endl;
cout << Sum(4.5, 5.1) << endl;


            //урок 41. Шаблоны функций

     //создаем тип, делее делаем функцию этого тип, теперь функция может принимать любые значения
     //typename = class

cout << Sum(5, 6) << endl;
cout << Sum(4.5, 5.1) << endl;
cout << Sum(4.5, 3) << endl;


             //урок 42. Функции и стек. Стек алгоритм. Стек рекурсии.
     //стек -  набор из нескольких функций, где последняя функция выполняется первой


             //урок 43. Рекурсия
          //позволяет выполнить функцию в теле самой функции, своего рода цикл
Foo(10);


             //урок 44. Рекурсия. Факториал числа.

cout << Fact(6) << endl;


             //Урок 45. Динамическая память.

             //Урок 46. Указатели

int a = 5;

int *pa = &a;   //указатели лучше называть двумя буквами, где первая будет p (pointer)
int* pa2 = &a;

cout <<"pa\t"<< pa << endl;
cout << "*pa\t" << *pa << endl;
cout << "pa2\t" << *pa2 << endl;

*pa2 = 3;

cout << "a\t" << a << endl;
cout << "pa\t" << *pa << endl;    //таким образом мы поменяли значение a через указатель

             //Урок 47. Арифметика указателей.

const int SIZE = 5;
int arr[SIZE]{ 4, 55, 24, 65, 276 };

for (int i = 0; i < SIZE; i++)
{
    cout << *(arr+i) << endl;     // эквивалент arr[i]
}

cout << "===========================" << endl;

int* pArr = arr;

for (int i = 0; i < SIZE; i++)
{
    cout << pArr[i] << endl;
}


          //Урок 48. Передача параметров в функцию по указателю.

int a = 0;
cout << a << endl;

Foo(&a);        // & - имперсант

cout << a << endl;



           //Урок 49. Возврат нескольких значений функции через указатели.

int a = 0, b = 0, c = 1;

cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "c = " << c << endl;

cout << "foo" << endl;
Foo(&a, &b, &c);

cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "c = " << c << endl;


           //Урок 50. Ссылки.

int a = 5;  //переменная

int* pa = &a;     //указатель           можно не присваивать значение при инициализации

int& aRef = a;      //ссылка         Ref - refraction (ссылка)          обязательно присвоить значение

int* ppa = &aRef;    //указатель на ссылку, в итоге будет изменять данные в a, сокращает работу памяти в ООП

cout << "*pa\t" << pa << endl;
cout << "&aRef\t" << aRef << endl;

pa += 2;     //добавили в адрес памяти 8 байт (2 по 4)
aRef += 2;      //добавили в данные 2;

cout << "*pa\t" << pa << endl;
cout << "&aRef\t" << aRef << endl;


                //Урок 51. Передача ссыылок в функцию.

int value = 5;
cout << "valeue\t" << value << endl;

cout << "Foo =" << endl;
Foo(value);             //функция берет копию данных (переменную value)
cout << "value = " << value << endl << endl;

cout << "Foo2 =" << endl;
Foo2(value);           // работает с обастью памяти где хранится переменная value
cout << "value = " << value << endl << endl;

cout << "Foo3 =" << endl;
Foo3(&value);          //тоже работает с областью памяти
cout << "value = " << value << endl << endl;


                //Урок 52. Возврат нескольких значений функции через ссылки.

int a = 12, b = 21, c = 43;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "c = " << c << endl;

cout << "Foo" << endl;
Foo(a, b, c);

cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "c = " << c << endl;


                //Урок 53. Операторы выделения памяти new и delete.

int* pa = new int;
*pa = 10;
cout << *pa << endl;
delete pa;


                 //Урок 54. Работа с динамической памятью. NULL и nullptr.

int* pa = new int;
*pa = 10;
cout << *pa << endl;
delete pa;         // сначала удаляем данные, а потом стераем адрес (null и nullptr)

pa = NULL;        //равнозначно pa = 0;

if (pa != NULL)     //NULL - макрос, nullptr - тип данных, лучше использовать nullptr тк компилятор точно не перепутает с int 0
{                   // NULL и 0 обычно используются в старых кодах
    cout << pa << endl;
}
delete pa;


                //Урок 55. Создание динамического массива.

int size = 0;

cout << "enter array size" << endl;
cin >> size;
int* arr = new int[size];

for (int i = 0; i < size; i++)
{
    arr[i] = rand() % 10;
}

for (int i = 0; i < size; i++)
{
    cout << "данные\t\t" << arr[i] << endl;

    cout << "ячейка памяти\t" << arr + i << endl;  // (arr + 1) - арифметика указателей
}
delete[] arr;      // необходимо указать [] чтобы компилятор понял что удаляем массив в не 1 его элемент


              //Урок 56. Двумерный динамический массив

int rows = 0;
int cols = 0;

cout << "enter rows count" << endl;
cin >> rows;
cout << "enter cols count" << endl;
cin >> cols;

int** arr = new int* [rows];   //** означает что переменная arr будет хранить указатель на указатель.

for (int i = 0; i < rows; i++)
{
    arr[i] = new int[cols];
}

//заполнение массива

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        arr[i][j] = rand() % 10;
    }
}

//вывод массива

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << arr[i][j] <<"\t";
    }
    cout << endl;
}

//удаление данных массива
for (int i = 0; i < rows; i++)
{
    delete[] arr[i];
}
delete[] arr;


               //Урок 57. Константные параметры функии
int* a = new int;
FillArray(a, 12);     //константы нужны чтоб предотвратить возможность искожения информации при подаче
ShowArray(a, 12);     //константы нужны для безопасности


               //Урок 58. Копирование динамического массива.

int size = 10;
int* firstArray = new int[size];           //создаем два массива для примера
int* secondArray = new int[size];

FillArray(firstArray, size);
FillArray(secondArray, size);

cout << "firstArray =\t";
ShowArray(firstArray, size);
cout << "secondArray =\t";
ShowArray(secondArray, size);

delete[] firstArray;                       //удаляем данные первого массива

firstArray = new int[size];                //создаем новый

for (int i = 0; i < size; i++)             //создаем цикл копирующий данные из 2 цикла в 1
{
    firstArray[i] = secondArray[i];
}

cout << "=======================" << endl;

cout << "firstArray =\t";
ShowArray(firstArray, size);
cout << "secondArray =\t";
ShowArray(secondArray, size);


delete[] firstArray;
delete[] secondArray;


                  //Урок 59. Изменить размер массива. Удалить/Добавить элемент.

int size = 5;
int* arr = new int[size];

FillArray(arr, size);

ShowArray(arr, size);

push_back(arr, size, 111);    //доюавляем число 111 в последнюю ячейку массива
ShowArray(arr, size);

pop_back(arr, size);          //удаляем последнюю ячейку массива
ShowArray(arr, size);

delete[] arr;


                 //Урок 60. Строки. Строковый массив

char string[] = "Hello world!";
cout << string << endl;

char string1[] = { 'h','e','l','l','o','/0'};  //  /0 - терминирующий ноль, показывает где массив должен остановиться
cout << strlen(string1) << endl;          //strlen - позволяет узнать длину строки


                 //Урок 61. Преобразование типов.

double a = 320.2354;
int b = 15;
int c = 143.213;

cout << b / a << endl;     //компилятор привел число к большему типу данных
cout << c << endl;      //компилятор сам привел число в int
cout << (int)a << endl;
cout << (bool)a << endl;    //если a равно 0, то false (0), оставльные true (1)
cout << (char)a << endl;    //приводит к занчению по таблице ASCII


                 //Урок 62. таблица символов ASCII.

for (int i = 0; i < 255; i++)
{
    cout << "code = " << i << " " << "char = " << (char)i << endl;
    // символы до 127 статичный, а те которые после могут меняться в зависимости от setlocale
}


                 //Урок 63. Строки и указатели.

const char* strArr[] = { "Hello","World","Its me" };

for (int i = 0; i < 3; i++)
{
    cout << strArr[i] << endl;
}


                  //Урок 64. Конкатенация строк.Тип данный string.

/////////////////////Стиль С/////////////// - не желательный

//char result[255]{};    //используем {} чтобы массив инициализировался пустым, а не с мусором
//char str1[255] = "Hello";   //массив из 255, чтобы туда можно было записать с помощью арифметики указателей
//char str2[255] = "World";
//
//strcat(result, str1);
//strcat(result, str2);
//
//cout << result << endl;

//////////////////////////////

////////////////////////Стиль С++//////////

//подключаем библиотеку <string>  - появляется новый тип данных, не нужно создавать массив для строк.
string str1 = "Мартин";
string str2 = "Игоревич";
string str3 = "Дугин";
string result;

result = "Фамилия - "+ str3 + "\tИмя - " + str1+ "\tОтчество - "+ str2;

cout << result << endl;

                //Урок 65. Указатель на функцию в качестве параметра.

//int(*FooPointer)(int a);  // создаем указатель

//FooPointer = Foo1;    // присваиваем указателю функцию

//cout << FooPointer(5) << endl;

ShowInfo(GetDataFromBD);       //передаем данные из функции БД в функцию выводящую инфо


//Урок 66. Препроцессор. #define.

// #define PI 3.14      обычно пишется в начале программы, работаеет так же как и const ...   но отличается в компиляции
// define  при запуске программы будет видеть все PI как 3.14, а только потом запустит программу

#define tab "\t"     //

    cout << "text" << tab << "text" << endl;

#define begin {      //но таким образом мы убрали встроенную в c++ функцию begin()
#define end }        

    for (int i = 0; i < 5; i++)
        begin
        cout << i << endl;
        end


              //Урок 67. Макрос функция.

#define FOO(x,y) ((x)*(y))   //в первых скобках передаваемые значения, вторая выводит результат дейсвтя в скобках

cout << FOO(5, 6) << endl;


               //Урок 68. Условная компиляция.

#define DEBUG 5         //рассмотрим пример когда у нас есть отладочная информация, но релиза она нам не нужна
//   Информция о начале и конце цикла нужна для отладки, когда мы закомметируем строку define DEBUG ифнормация 
// между строк indef и endif выводиться не будет

#ifdef DEBUG
cout << "Начало цикла" << endl;
#endif // DEBUG

for (int i = 0; i < 5; i++)
{
    cout << i << endl;
}

#ifdef DEBUG
cout << "Конец цикла определен" << endl;   //если DEBUG не закомментирован будет выводить этот cout
#else
cout << "Конец цикла не определе" << endl;    //если DEBUG закомментирован будет выводить этот cout
#endif // DEBUG

//при помощи #ifndef логика работы будет обратна

#if DEBUG < 4
cout << "Конец цикла определен" << endl;     //можно использовать логику конструкций if
#elif DEBUG == 5
cout << "Конец цикла не определе" << endl;    
#endif // DEBUG



                     //Урок 69. Тернарный оператор.

int a;

cin >> a;

if (a < 10)
{
    cout << "a меньше 10" << endl;
}
else
{
    if (a > 10)
    {
        cout << "a больше 10" << endl;
    }
    else
    {
        cout << "a равна 10" << endl;
    }
}


(a < 10) ? (cout << "a меньше 10" << endl) : (a > 10) ? (cout << "a больше 10" << endl) : cout << "а равна 10";
//логика записей идетична, скобки необязательны (для нагялдности)


                //Урок 70. Параметры функции main argc argv.

//argc - argument counts - хранит количество параметров
//argv - argument value - хранит информацию о проекте в char (параметры)

for (int i = 0; i < argc; i++)
{
    cout << argv[i] << endl;   //таким образом мы узнали где храниться файл с проектом
}
//если в командную строку виндовс ввести расположение файла откроется окно командной строки проекта
//после ввода расположения exe файла с проектом через пробел можно написать параметры которые примет программа


                 //Урок 71. int main.

// void main() - не совсем правильный способ, такой способ работает не во всех ide (особенность vs studio)
// int main() - правиольный способ, но необходимо возвращаемое значение
// { return 0; }


                 //Урок 72. Что такое ООП.
// методы в ООП:

// инкапсуляция - функционал, позволяющий скрыть некие свойства класса от другого пользоватея, оставляя внешнее элементы
// например (кофемолка делает внутри некие процессы: выбирает количесвто оборотов мотора и тд., а пользователь может 
// только запустить / остановить кофемолку)

// наследование - процесс, с помощью которого другой объект может наследовать его функционал
// например (кофемашина использует функционал кофемолки, далее дополняет своим функционалом)

// полиморфизм - возможность объекта вести себя по-разному в зависимости от ситуации
// например (если использовать ручную кофемолку и электрическую, в одном случаем кофе молотится путем электрической энергии,
// в другом случае энергия рук, но метод один и тот же - молоть кофе)


                  //Урок 73. Класс и объект класса в ООП.

// создвем class - своего рода пользовательский тип данных
// класс - Human, объект - firsHuman

Human firsHuman;

//прежде чем писать в теле класс, нужно выбрать pablic или private  или др.
// пишем имя объекта, ставим точку и выбираем параметр.

firsHuman.age = 30;
firsHuman.name = "Ivanov Ivan Ivanovich";

cout << firsHuman.age << endl;
cout << firsHuman.name << endl;

cout <<"_____________________" << endl;

Human secondHuman;

secondHuman.age = 19;
secondHuman.name = "Noname Petrov";

cout << secondHuman.age << endl;
cout << secondHuman.name << endl;

               
                   //Урок 74. Методы и функции класса.

//напишем функцию в теле класса Human
//так как функция и поля с переменными в области видимости класса Human, то фнукция видит эти переменные


Human firsHuman;

firsHuman.age = 30;
firsHuman.name = "Ivanov Ivan Ivanovich";
firsHuman.weight = 93;

firsHuman.Print();


                    //Урок 75. Модификаторы доступа классов. public private protected.

//если не написать в классе модификатор доступа - автоматически выставится private
//отличие private от protected в наследовании, объект не доспен, но при наследовании можем получить доступ
//privat не доступен из вне, но доступно внутри класса и для жружественных классов.
//модификаторы работают и на методы в клссе,

Point a;
a.Print();    //так как функция находится в секции public, мы можем ее использовать


                    //Урок 76. Геттеры и сеттеры. Инкапсуляция.

// нужны чтобы исключить прямую работу с полями класса. 

Point76 a;
a.SetX(12);
int result = a.GetX();
cout << result << endl;
a.Print();


                     //Урок 77. Инкапсуляция.

// Пример инкапсуляции на кофемлоке
// Автоматически проеверяется напряжение, в случае если напряжение ок кофемлока работает, если нет - бип бип.

CoffeGrinder a;
a.Start();
 */

                     //Урок 78. Конструктор класса.

// Конструктор класса есть всегда, но если мы его не описали - это конструктор по умолчанию

Point76 a(12, 32);     //так как конструктор не поумолчанию необходимо открыть скобки и внести соответсвующие данные
a.Print();
                        //таким образом можем 
Point76 b(1, 324);
b.Print();












} 














