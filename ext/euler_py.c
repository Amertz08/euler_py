#include <Python.h>
#include "../src/euler.h"

static char module_docstring[] = "Provides interface to Project Euler problems";

/*
 * Function implementations
 */
static PyObject* euler_py_problem_one(PyObject *self, PyObject *args)
{
    int max, result;

    if (!PyArg_ParseTuple(args, "i", &max))
        return NULL;

    result = problem_one(max);

    return Py_BuildValue("i", result);
}

static PyObject* euler_py_problem_two(PyObject *self, PyObject *args)
{
    int n, result;

    if (!PyArg_ParseTuple(args, "i", &n))
        return NULL;

    result = problem_two(n);

    return Py_BuildValue("i", result);
}

static PyObject* euler_py_problem_three(PyObject *self, PyObject *args)
{
    long n, result;

    if (!PyArg_ParseTuple(args, "l", &n))
        return NULL;

    result = problem_three(n);

    return Py_BuildValue("i", result);
}

static PyObject* euler_py_problem_four(PyObject *self, PyObject *args)
{
    int n, result;

    if (!PyArg_ParseTuple(args, "i", &n))
        return NULL;

    result = problem_four(n);

    return Py_BuildValue("i", result);
}
// END function implementations

// Wire in functions to module
static PyMethodDef module_methods[] = {
        {"problem_one", euler_py_problem_one, METH_VARARGS, "Solution to problem 1"},
        {"problem_two", euler_py_problem_two, METH_VARARGS, "Solution to problem 2"},
        {"problem_three", euler_py_problem_three, METH_VARARGS, "Solution to problem 3"},
        {"problem_four", euler_py_problem_four, METH_VARARGS, "Solution to problem 4"},
        {NULL, NULL, 0, NULL}
};


// Module definition
static struct PyModuleDef euler_py_module = {
        PyModuleDef_HEAD_INIT,
        "euler_py",
        module_docstring,
        -1,
        module_methods
};

// Module initialization function
PyMODINIT_FUNC PyInit_euler_py(void)
{
    return PyModule_Create(&euler_py_module);
}
