make clean
make init_dbms
make dbms
#clear
#LD_PRELOAD=./testing/obj/shim0.so
#for i in {0..9}; do ./bin/dbms; done
./bin/dbms
echo ""

