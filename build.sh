#! /bin/bash 
########################## bash install script ###########################
mkdir build
gcc -c -fpic GCN_utils.c -o build/GCN_utils.o
gcc -shared -o build/libGCN_utils.so build/GCN_utils.o
