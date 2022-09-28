
g++ -c Number/Number.cpp -o Number/Number.o
ar cr Number/libNumber.a Number/Number.o 
g++ -c Vector/Vector.cpp -o Vector/Vector.o -INumber -LNumber -lNumber
g++ -shared -fPIC -o Vector/libVector.so Vector/Vector.o
g++ -o Main/main Main/main.cpp -INumber -LNumber -lNumber -IVector  -LVector -lVector 
cd Main
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../Vector
./main
cd ../

