mkdir -p tmp
mkdir -p lib
cd tmp
gcc -Wall -Werror -c ../src/stream/*c -I../include/stream -I/usr/include/udiptapathak
ar rcs libstream.a *.o
rm *.o
mv libstream.a ../lib/
cd ../
rm -rf tmp