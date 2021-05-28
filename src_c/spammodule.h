#ifndef SPAM_MODULE
#define SPAM_MODULE
#include <Python.h>


static PyObject *SpamError;

PyMODINIT_FUNC PyInit_spam(void);
static PyObject *spam_system(PyObject *self, PyObject *args);

/**
 * Method Table Listing functions
 **/
static PyMethodDef SpamMethods[] = {
    {"system",  spam_system, METH_VARARGS,
     "Execute a shell command."},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

static struct PyModuleDef spammodule = {
    PyModuleDef_HEAD_INIT,
    "spam",   /* name of module */
    "This is a simple example module.", /* module documentation, may be NULL */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    SpamMethods
};


#endif // SPAM_MODULE