# Звя'заний список на C
## Опис
### Файлова структура
`llist.h` - заголовок бібліотеки
`llist.c` - код бібліотеки
`main.c` - тестова програма
### Код
```c
typedef struct Node
{
	void		*data; /* Адреса даних */
	struct Node	*next; /* Адреса наступного елементу, NULL якщо немає */
} Node;
```
```c
Node*	allocnode(void*);			/* Виділити елемет */
Node*	appendnode(Node*, void*);	/* Додати в кінець */
Node*	removenode(Node*, int);		/* Видалити за індексом */
Node*	getnode(Node*, int);		/* Отримати за індеком */
```
## Збирання
### mk
`mk` - зібрати за домогою `Plan9 mk`
### make
`make` - зібрати за домогою `Make`
### cmake
`cmake -S . -B build -GNinja` - підготовка для збірки за домогою `Ninja`
`cmake --build build` - збірка за допомогою обраної системи збірки(у прикладі вище - Ninja)
## Приклад
<img width="760" height="469" alt="image" src="https://github.com/user-attachments/assets/aeee6dc3-93e6-48eb-a343-d2fe202b8049" />
