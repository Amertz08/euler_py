
#include <Python.h>
#include "euler.h"

static PyObject* euler_py_problem_one(PyObject *self, PyObject *args)
{
    int max, result;

    if (!PyArg_ParseTuple(args, "i", &max))
        return NULL;

    result = problem_one(max);

    return Py_BuildValue("i", result);
}