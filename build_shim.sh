make clean
make init_shim_sh
make shim
#clear
#LD_PRELOAD=./testing/obj/shim0.so
./bin/shim
echo ""

