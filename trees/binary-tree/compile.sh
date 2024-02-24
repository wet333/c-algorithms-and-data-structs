gcc -c binary-tree.c
gcc -c main.c
gcc binary-tree.o main.o -o btree-demo

chmod +x btree-demo

rm *.o