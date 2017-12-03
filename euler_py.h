
#ifndef EULER_PY_EULER_PY_H
#define EULER_PY_EULER_PY_H

#include <Python.h>


static char module_docstring[] = "Provides interface to Project Euler problems";
static PyObject* euler_py_problem_one(PyObject* self, PyObject *args);

static PyMethodDef module_methods[] = {
        {"problem_one", euler_py_problem_one, METH_VARARGS, "Solution to problem 1"},
        {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC init_euler_py(void)
{
    PyObject *m = PyInitModule3("euler_py", module_methods, module_docstring);
    if (m == NULL)
        return;
}

#endif //EULER_PY_EULER_PY_H
