# 2 Упражнение

От предния път:
Направихте ли си?
- Slack
- Github
- CodeBlocks/VS/other
- Посетихте ли практикума?


## Структурата на една програма

`#include <iostream>` - Вкарваме библиотеката iostream, която ни е нужда за повечето операции
`using namespace std;` - Използваме std от iostream, което ни помага за по-лесен синтаксис
`int main()` - функция, която се изпълнява първо в нашата програма
променливи ->

## Променливи

- Типове данни
	- Скаларни - bool, char, int, float, double, enum, T*, T&
	- Съставни - масив, структура, клас, обединение
	- Изброем - enum
	- typedef - `typedef unsigned char BYTE;`

### Таблица с типове, допустими стойности и операции

### Преобразуване

- bool -> всички типове
- short -> int
- unsigned short -> unsigned int
- float -> double
- 
### Константи
`const int FIVE = 5;`

### Дефиниране на променливи

тип <име> = <стойност>;

## Оператори

### Вход
`cin>>`

### Изход
`cout<<`

### Аритметични оператори 

- +, -, *, /, %,  ==, !=, >, < , >=, <=
- ++, --

## Коментари

`//This is comment`

## Потърсете след упражнението

- какво са int16_t, int32_t и информация за други такива типове



# Задачи

типове променливи

### Задача 1: Сбор
Напишете програма, която чете от конзолата две числа и връща сумата им.

Вход:
```
  5
	8
```
Изход:
```
    13
```

### Задача 2: Средно аритметично
Напишете програма, която чете от конзолата две числа и връща средно аритметичното им.

Вход:
```
  5
	8
```
Изход:
```
    6.5
```

### Задача 3: Четно число
Напишете програма, която чете от конзолата число и извежда дали това число е четно.

Вход:
```
    5
```
Изход:
```
    0
```

### Задача 4: от Фаренхайт в Целзии

Напишете програма, която чете от конзолата температура във Фаренхайт и извежда колко е температурата в Целзии.

Вход:

```
	9

```

Изход:

```
	-12.7778

```

### Задача 5: Hello something

Напишете програма, която чете от конзолата дума и извежда на конзолата "Hello <думата>"

Вход:

```
	C++

```

Изход:

```
	"Hello C++"

```

### Задача 6: Лице на правоъгълник

Напишете програма, която чете от конзолата две страни на правоъгълник и извежда лицето му.

Вход:

```
	3 8

```

Изход:

```
	24
```

### Задача 7: Високосна?
Напишете програма, която чете от конзолата година и извежда дали тази година е високосна.

Вход:
```
    2000
```
Изход:
```
    True
```

### Задача 8: Средно квадратично
Напишете програма, която намира средно квадратично на три числа до четвъртата цифра след десетичната запетая.

Вход:
```
    3
	5
	8
```
Изход:
```
    5.....
```

### Задача 9: Напишете програма, която чете от конзолата число и връща:
- числото на квадрат
- числото на 10 степен
- корен от числото
- дали числото е > от друго число въведено от конзолата
- логаритъм от числото
- е на степен числото
- цялата част на числото, закръглена нагоре
- модул от числото

### Задача 10: Приеха ли ме в СИ?
Напишете програма, която изисква от потребителя да въведе няколко неща за него:
- Изпит - математика 1 или математика 2
- Оценка - оценка от изпита
- Има ли диплома
- Оценка - от дипломата

След това програмата трябва да реши дали потребителя е приет СИ първи курс.
Трябва да е изкарал математика 2 с оценка над 5.36, да има диплома и да има оценка от дипломата над 5.23.

Вход:
```
    Type exam: 1
    Grade оf exam: 5.80
    Do you have a diploma?: y
    Grade of diploma: 5.93
```
Изход:
```
    Will you study SE? True
```

### Приятно решаване