./build*.sh
for i in ./build_dbms.sh ./build_shim.sh ./build_std.sh ./build_test.sh ./build_L2.sh; do $(i); done
