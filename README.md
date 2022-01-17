# TradeCalculator
Just simple trade calculation software.


Linux buil:

g++ -fPIC -c mmcalc3.c \n
g++ -shared -o libmmcalc3.so mmcalc3.o \n
qmake \n
make \n
cp ./lib/libmmcalc3.so ./ \n
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./ \n
./TradeCalculator \n
