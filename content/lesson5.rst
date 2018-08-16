Адреса и указатели
##################

:date: 2018-08-05 09:00
:summary: Адреса и указатели в С. Адресная арифметика. Динамическая память. Ошибки работы с памятью. Динамические двумерные массивы.
:status: published
:published: yes
:test_link: http://acm.mipt.ru/twiki/bin/view/Cintro/WebHome
:test_comment: Дальнейшее самостоятельное изучение программирования

.. default-role:: code


Адреса и указатели в Си. Адресная арифметика
============================================

.. youtube:: nIY1fBkGQq4

Объявление указателя.
Разыменование * и взятие адреса &.
Адресная арифметика.
Имя массив как константный адрес.

``addresses_and_pointers.c``
----------------------------

.. code-include:: code/lesson5/addresses_and_pointers.c
    :lexer: cpp

``address_arithmetics.c``
-------------------------

.. code-include:: code/lesson5/address_arithmetics.c
    :lexer: cpp


Тип void* и интерпретация данных
================================

.. youtube:: IKXwBgB14qc

Размер ячейки для хранения адреса.
Тип void*. Невозможность разыменования.
Преобразование типа указателя.
Пример реинтерпретации double как unsigned char.
Интерпретация void* внутри функции по маркеру типа.

``void_reinterpretation.c``
---------------------------

.. code-include:: code/lesson5/void_reinterpretation.c
    :lexer: cpp

Передача адреса переменной в функцию
====================================

.. youtube:: OXhrYl9no2A

По умолчанию параметры передаются по значению, то есть копируются.
Передаём функции параметр адресного типа.
Изменение переменной-параметра из функции.
Нельзя передавать адрес локальной переменной вне функции.

``function_address_parameter.c``
--------------------------------

.. code-include:: code/lesson5/function_address_parameter.c
    :lexer: cpp

Выделение и освобождение динамической памяти
============================================

.. youtube:: dNwXcyLfHkI

Распределение ресурсов операционной системой.
Выделение динамической памяти: malloc().
Функция sizeof(тип), вычисляемая при компиляции.
Необходимость освобождения памяти: free().
Независимость выделяемых отрезков памяти.
Чем отличается функция calloc().

``dynamic_memory.c``
--------------------

.. code-include:: code/lesson5/dynamic_memory.c
    :lexer: cpp

``dynamic_int.c``
-----------------

.. code-include:: code/lesson5/dynamic_int.c
    :lexer: cpp

Техника безопасности при работе с памятью
=========================================

.. youtube:: HyyfbYXuW1U

Ошибки работы с памятью в Си: Segmentation fault, Memory leak.
Инициализация указателей: NULL.
Проверка корректности адреса.
Ответственность за освобождение памяти.

``segmentation_fault.c``
------------------------

.. code-include:: code/lesson5/segmentation_fault.c
    :lexer: cpp

``memory_leak.c``
-----------------

.. code-include:: code/lesson5/memory_leak.c
    :lexer: cpp

Двумерные массивы: обычные и динамические
=========================================

.. youtube:: MQBV3PMx5sg

Обычные двумерные массивы в С.
Передача двумерного массива в функцию.
Динамические двумерные массивы в С.
Выделение и освобождение памяти для динамического двумерного массива.
Передача динамического двумерного массива в функцию и возврат из функции.


``static_2d_array.c``
---------------------

.. code-include:: code/lesson5/static_2d_array.c
    :lexer: cpp

``dynamic_2d_array.c``
----------------------

.. code-include:: code/lesson5/dynamic_2d_array.c
    :lexer: cpp


.. Видео ролики курса:
	5_01-addresses_and_pointers.mp4
	5_02-void_reinterpretation.mp4
	5_03-functions_parameters.mp4
	5_04-dynamic_memory.mp4
	5_05-memory_problems.mp4
	5_06-static_and_dynamic_2d_arrays.mp4


Самостоятельная работа
======================

Уважаемые студенты! К 5-му уроку контеста не предусмотрено.

Вместо этого я приглашаю вас к самостоятельному изучению материалов на сайте http://acm.mipt.ru

А также к участию в учебных соревнованиях на сайте http://codeforces.com/
