# TradeCalculator
Just simple trade calculation software.


Linux build:

cd ./lib
g++ -fPIC -c mmcalc3.c\
g++ -shared -o libmmcalc3.so mmcalc3.o\
cd ..\
qmake\
make\
cp ./lib/libmmcalc3.so ./\
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./\
./TradeCalculator
