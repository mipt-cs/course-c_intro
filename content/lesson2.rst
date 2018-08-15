Циклы и ветвления
#################

:date: 2018-08-02 09:00
:summary:	Вложенные и каскадные условные конструкции. Операторы goto и switch. Управление циклом: break, continue. Тест простоты числа. Разложение числа на множители. Фильтрация последовательности. Индуктивные функции: подсчёт, сумма, произведение, поиск числа, проверка критерия, максимум.
:status: published
:published: yes

.. default-role:: code


Оператор if и организация ветвления
===================================

.. youtube:: E_5mLXawjbM

Оператор ветвления if в Си. Полная и неполная формы.
Когда нужно и не нужно ставить фигурные скобки.
Пример применения if для проверки числа на чётность.
Вложенные условные инструкции.
Каскадное ветвление else-if.


``if_else.c``
-------------

.. code-include:: code/lesson2/if_else.c
    :lexer: cpp

``nested_if.c``
---------------

.. code-include:: code/lesson2/nested_if.c
    :lexer: cpp

``cascade_elif.c``
------------------

.. code-include:: code/lesson2/cascade_elif.c
    :lexer: cpp
	

Метки, оператор goto и оператор switch
======================================

.. youtube:: sHjJ2OIiIas

Оператор goto и прыжки на метки.
Аргументы против goto.
Блок-схема, которую нельзя сделать на циклах.
Ветвление switch и почему нужен break.

``never_goto.c``
----------------

.. code-include:: code/lesson2/never_goto.c
    :lexer: cpp

``switch_case.c``
-----------------

.. code-include:: code/lesson2/switch_case.c
    :lexer: cpp
	
Управление циклом: break, continue
==================================

.. youtube:: V9zc-Ik8TtI

Операторы управления циклом: break и continue.
Адекватное использование break.
Адекватное испльзование continue.
Тест простоты числа с использованием break и переменной-флага.
Тест простоты числа с non-tail return.

``break_usage.c``
-----------------

.. code-include:: code/lesson2/break_usage.c
    :lexer: cpp


``continue_usage.c``
--------------------

.. code-include:: code/lesson2/continue_usage.c
    :lexer: cpp


``prime_break.c``
-----------------

.. code-include:: code/lesson2/prime_break.c
    :lexer: cpp


``prime_function.c``
--------------------

.. code-include:: code/lesson2/prime_function.c
    :lexer: cpp

Разложение числа на множители
=============================

.. youtube:: eGUwTj2v42c

Постановка задачи.
Пример с использованием вложенного цикла.
Пример без использования вложенного цикла.

``factorization.c``
-------------------

.. code-include:: code/lesson2/factorization.c
    :lexer: cpp

Фильтрация потока чисел
=======================

.. youtube:: gTv7izWvXXg

Типы работы с последовательностями чисел.
Фильтрация последовательности.

``filtration.c``
----------------

.. code-include:: code/lesson2/filtration.c
    :lexer: cpp


Индуктивные функции: подсчёт, сумма, произведение
=================================================

.. youtube:: ZheB3ItHdxA

Индуктивные функции.
Подсчёт цифр числа.
Сумма цифр числа.
Произведение цифр числа.

``inductive_count_production_sum.c``
------------------------------------

.. code-include:: code/lesson2/inductive_count_production_sum.c
    :lexer: cpp

Индуктивные функции: any of, all of
===================================

.. youtube:: _Z6RyZ52-7o

Проверка соответствия критерию.
Алгоритмы any of и all of.
Логические вычисления или работа с флажками?

``inductive_any_all.c``
-----------------------

.. code-include:: code/lesson2/inductive_any_all.c
    :lexer: cpp

Индуктивные функции: поиск максимума
====================================

.. youtube:: MaVd1L892Yw

Поиск максимума как индуктивная функция.
Проблема инициализации временного максимума.
Поиск местоположения максимума.
Подсчёт элементов, равных максимальному.

``inductive_maximum.c``
-----------------------

В видео при поиске местоположения максимального элемента допущена ошибка — отсутствует инициализация `i = 0;`. В примере ниже она исправлена:

.. code-include:: code/lesson2/inductive_maximum.c
    :lexer: cpp

Можно заметить, что при отсутствии чётных чисел в потоке мы будем наблюдать при выводе результата интерпретацию "мусора" в неинициализированной переменной `m_i`. Можно её, конечно, инициализировать, например, `m_i = -1;`, но это не помогает исправить логику программы, поскольку мы будем выводить то, что математически не определено (максимум среди пустой подпоследовательности). Для отслеживания этого нужно перед  выводом результата по значению `m` или `m_i` проверить, а были ли вообще в последовательности чётные числа.

.. Видео ролики курса:
	2_01-if_else_nested_and_cascade.mp4
	2_02-goto_switch.mp4
	2_03-break_continue_return.mp4
	2_04-factorization.mp4
	2_05-filtration.mp4
	2_06-count_sum_production.mp4
	2_07-inductive_any_all.mp4
	2_08-maximum_search.mp4