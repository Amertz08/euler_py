
#include <Python.h>
#include "../src/euler.h"

static char module_docstring[] = "Provides interface to Project Euler problems";

static PyObject* euler_py_problem_one(PyObject *self, PyObject *args)
{
    int max, result;

    if (!PyArg_ParseTuple(args, "i", &max))
        return NULL;

    result = problem_one(max);

    return Py_BuildValue("i", result);
}

static PyMethodDef module_methods[] = {
        {"problem_one", euler_py_problem_one, METH_VARARGS, "Solution to problem 1"},
        {NULL, NULL, 0, NULL}
};


// Module definition
PyObject* euler_pymodule = {
        PyModuleDef_HEAD_INIT,
        "euler_py",
        module_docstring,
        -1,
        module_methods
};

// Module initialization function
PyMODINIT_FUNC PyInit_euler_py(void)
{
    return PyModule_Create(&euler_pymodule);
}

