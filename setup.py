import glob
from distutils.core import setup, Extension

sources = glob.glob('ext/*.c') + glob.glob('src/*.c')

euler = Extension(
    'euler_py',
    include_dirs=['include'],
    sources=sources,
    extra_compile_args=['-std=c99']
)

setup(
    name='euler_py',
    version='0.1',
    description='Project Euler Solutions',
    ext_modules=[euler]
)
