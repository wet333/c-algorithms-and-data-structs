gcc -c linked-list.c
gcc -c main.c
gcc linked-list.o main.o -o ll-demo

chmod +x ll-demo

rm *.o