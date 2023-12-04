#include <stdio.h>
#include <stdlib.h>
#include <Python.h>
/**
 * print_python_list_info - Print some info
 * @p: PyObject
 * Return: Nothing
 */
void print_python_list_info(PyObject *p)
{
PyObject *item;
PyListObject *list = (PyListObject *)p;
int ias, size, alloc;

size = Py_SIZE(p);
alloc = list->allocated;
printf("[*] Size of the Python List = %d\n", size);
printf("[*] Allocated = %d\n", alloc);

for (ias = 0; ias < size; ias++)
{
item =  PyList_GetItem(p, ias);
printf("Element %d: %s\n", ias, Py_TYPE(item)->tp_name);
}
}
