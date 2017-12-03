
#ifndef EULER_PY_EULER_PY_H
#define EULER_PY_EULER_PY_H

#include <Python.h>


static char module_docstring[] = "Provides interface to Project Euler problems";

// Module functions
static PyObject* euler_py_problem_one(PyObject* self, PyObject *args);

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

#endif //EULER_PY_EULER_PY_H
