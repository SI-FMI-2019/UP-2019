## Указатели

Ние вече се запознахме с указатели без да ги споменаваме и това са масивите.

Указателите са променливи в C++, чиято стойност е адрес в паметта. Той също има тип.

```
int x = 5;
int *px = &x
```
px показва адреса, където е записана променливата ни x.


```
    int myArr [] = {1,2,3,4};
    int *myArrP = myArr;

    cout<<"Adress of myArrP "<<myArrP<< "\nAddr of last element "<<myArr+4;
```
Аритметични операции с указател.


```
    int y = 7;
    int* yp = &y;
    (*yp)++;
    cout<< "Y is "<<y<<endl;
```
Смяна на стойността на променлива чрез указател.

Указателите си имат тип, но може и да са от тип void, където не е важен типът,а самият адрес, който се пази. Чрез него можем да достъпваме различни типове.


### Псевдоними

Псевдонимът е референция към дадена променлива. 
Не може да се прави аритметика. Сочи само към едно място. Самата референция (поинтър) остава константна.
Използват се за алтернатични имена. (Обикновено се ползва като аргумент на функция, за да не се прави копие на дадената променлива. Друг случай е ако искаме да променяме самта променлива)


#### Разлика между указатели и псевдоними

- Псевдонимите не могат да имат null като стийност. Винаги сочат към дадена променлива.
- Псевдонимите не могат да бъдат променяни.

```
    int numb = 5;
    int &numbr = numb;
    cout<<"The number is "<<numb<<endl;
    cout<<"The ref is "<<numbr<<endl;
    numbr++;
    cout<<"Changes reference is " << numbr<<endl;
```

Основното използване на указатели и референции е при използването на функции.


Полезни примери:

```
#include <iostream>
using namespace std;

void changeNumber(int n)
{
    cout<<"Address of number in main "<<&n<<endl;
    n ++;
}

int main()
{
    int myNumber = 5;
    cout<<"Number before function: "<<myNumber<<endl;
    cout<<"Address of number in main "<<&myNumber<<endl;
    changeNumber(myNumber);
    cout<<"Number after function: "<<myNumber<<endl;

    return 0;
}
```
^ От този пример виждаме, че адресите на двете променливи са различни и не се променя стойността на нашата променлива.

```
#include <iostream>
using namespace std;

void changeNumber(int& n)
{
    cout<<"Address of number in main "<<&n<<endl;
    n ++;
}

int main()
{
    int myNumber = 5;
    cout<<"Number before function: "<<myNumber<<endl;
    cout<<"Address of number in main "<<&myNumber<<endl;
    changeNumber(myNumber);
    cout<<"Number after function: "<<myNumber<<endl;

    return 0;
}
```

^ Тук обаче виждаме, че адресите са едни и същи и успяваме да променим стойността на нашата променлива. Ползваме референция към нашето число, за да го променим.

```
#include <iostream>
using namespace std;

void changeNumber(int* n)
{
    cout<<"Address of number in main "<<n<<endl;
    (*n) ++;
}

int main()
{
    int myNumber = 5;
    cout<<"Number before function: "<<myNumber<<endl;
    cout<<"Address of number in main "<<&myNumber<<endl;
    changeNumber(&myNumber);
    cout<<"Number after function: "<<myNumber<<endl;

    return 0;
}
```

^ Тук правим същото като горе с указатели, а не референции. Виждаме, че отново адресите са еднакви.



Задачи
=====================


### Задача 1:
Напишете функция, която разменя две числа.


Вход:
```
   3 5
```

Изход:
```
    5 3
```    

### Задача 2: Масив от числа
Да се състави програма, която по даден указател към начало и край на масив от тип int, да намира сумата на числата в него.

Вход:
```
    1,2,3,4,5
```

Изход:
```
    15
```




