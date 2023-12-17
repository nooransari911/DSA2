make clean
make init_shim_sh
make shim
#clear
#LD_PRELOAD=./testing/obj/shim0.so
for i in {0..9}; do ./bin/shim; done
#echo ""

