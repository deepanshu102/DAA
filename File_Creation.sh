cat *.c>f;
for i in $(ls *.cpp)
do
cat f $i>file
cat file>f;
done

