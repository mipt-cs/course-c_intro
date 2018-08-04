Циклы и ветвления
#################

:date: 2018-08-02 09:00
:summary:	Вложенные и каскадные условные конструкции. Управление циклом. Тест простоты числа. Разложение числа на множители. Обработка последовательностей чисел. Индуктивные функции: подсчёт, сумма, произведение, поиск числа, проверка критерия, максимум.
:status: published
:published: yes
:test_link: http://judge2.vdi.mipt.ru/fixme.html

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

Типы работы с последовательностями чисел.
Фильтрация последовательности.

.. code-include:: code/lesson2/factorization.c
    :lexer: cpp


Индуктивные функции: подсчёт, сумма, произведение
=================================================

Индуктивные функции: поиск числа, проверка критерия
===================================================

Индуктивные функции: максимум
=============================


.. Файлы видео курса:
	2_01-if_else_nested_and_cascade.mp4
	2_02-goto_switch.mp4
	2_03-break_continue_return.mp4
	2_04-factorization.mp4