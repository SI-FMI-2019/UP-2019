## Функции

### Дефиниция за функция

``` return_type function_name (args)
{
  // Code/ body of function
  return variable (of return_type);
}
```

Трябва да си декларираме фунцкиите преди да сме ги извикали (C++)
Можем да ги декларираме преди това, да ги извикаме и след това да напишем тялото.

ДА
```
int sum(int a, int b)
{
  return a + b;
}

int main()
{
  int x = 4, y = 5;
  sum(x,y);
}
```

НЕ
```
int main()
{
  int x = 4, y = 5;
  sum(x,y);
}

int sum(int a, int b)
{
  return a + b;
}
```

ДА
```
int sum(int a, int b);

int main()
{
  int x = 4, y = 5;
  sum(x,y);
}

int sum(int a, int b)
{
  return a + b;
}
```


### Видове return_type
return_type - int, double, bool, char,... void

При void нямаме `return variable;`

### Област на видимост на променливите - да си припомним

```
int multiply(int a, int b)
{
  int multi = a*b;
  return x*y;
}

int main()
{
  int x = 4, y = 5;
  multiply(x,y);
  
  multi = 40;
}
```

### Pure functions

Лош пример за функция, която не е pure.
```
int changeX(int change)
{
  change = change + 5;
  return change;
}

int main()
{
  int x = 5;
  cout<<"X is"<< x;
  changeX(x);
  cout<<"X is"<< x;
  
}
```

### Default params

```
multiply (int a, int b = 2)
{
  int multiply = a * b;
  return multiply;
}

multiply(5) //is valid code
```


### Overloading - предефиниране на функции

Example:
```
#include <iostream> 
using namespace std; 
  
void print(int i) { 
  cout << " Here is int " << i << endl; 
} 
void print(double  f) { 
  cout << " Here is float " << f << endl; 
} 
void print(char const *c) { 
  cout << " Here is char* " << c << endl; 
} 
  
int main() { 
  print(10); 
  print(10.10); 
  print("ten"); 
  return 0; 
}
```


Задачи
=====================

От 4 Loops

### Задача 7: Делители
Напишете програма, която чете от конзолата число и извежда делителите на числото.

Вход:
```
    7
```
Изход:
```
    1 7
```
Вход:
```
    8
```
Изход:
```
    1 2 4 8
```

### Задача 8: Сума на делители
Напишете програма, която чете от конзолата едно число и извежда сумата от делителите на това число. ( Включително 1 и самото число).

Вход:
```
    8
```
Изход:
```
    15
```


### Задача 9: Просто ли е
Напишете програма, която чете от конзолата число и извежда дали то е просто.

Вход:
```
    7
```
Изход:
```
    Yes
```
Вход:
```
    8
```
Изход:
```
    No
```


### Задача 10: Прости делители
Напишете програма, която чете от конзолата число и казва дали броя на делителите е просто число.

Вход:
```
    7
```
Изход:
```
    True
```
Вход:
```
    8
```
Изход:
```
    False
```


### Задача 13: Fibb
Напишете програма, която чете от конзолата едно число n и извежда n-тото число на редицата на Фибоначи.

Вход:
```
    8
```
Изход:
```
    13
```


Нови задачи:

### Задача 1: Калкулатор
Да се реализира калкулатор с помощта на функции

### Задача 2:
Да се напише функция, която проверява дали дадена точка (x,y) се намира вътре в правоъгълник от две точки (x1,y1), (x2,y2)
