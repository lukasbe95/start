from distutils.core import Extension, setup

module = Extension("myModule",sources = ["cModule.c"])
setup(name="PackageName",
      version="version 1.0",
      description="Package for cModule",
      ext_modules=[module])
