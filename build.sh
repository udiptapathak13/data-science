mkdir -p tmp
mkdir -p lib
cd tmp
incl="../include"
src="../src"
uincl="/usr/include/udiptapathak"
wflags="-Wall -Werror"
gcc $wflags -c $src/stream/*c -I$incl/stream -I$uincl
ar rcs libstream.a *.o
rm *.o
mv libstream.a ../lib/
gcc $wflags -c $src/regression/*c $src/*.c -I$incl/regression -I$incl -I$uincl
ar rcs libregression.a *.o
mv libregression.a ../lib/
cd ../
rm -rf tmp