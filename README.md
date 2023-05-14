# Data Science Library

This is a static library that provides various tools to be used in other data science projects.

## How to build and install?

Run the following command in the main project folder to build the project

```bash
./build.sh
```

To install the program in the default directory, run the following command

```bash
./install.sh
```

## How to use it?

Mention the include path in your build program. If you are just using gcc, mention it as follows

```bash
gcc ... -I/usr/include/udiptapathak ...
```

Mention the library path to link in your build system, if you are using just gcc, do as follows

```bash
gcc ... -L/usr/lib/udiptapathak/ ...
```

In the source file of your project, include the header as follows

```C
#include <data-science/hash.h>
```

Caveat: The header file might look different based on the include path you choose to use.

To compile the program, if you are just using gcc, link the library as follows

```C
gcc ... -lhash ...
```