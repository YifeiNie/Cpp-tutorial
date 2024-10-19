# 通过执行这个脚本以执行下列命令，完成编译与执行rm 
sudo rm -rf build
mkdir build # 创建一个文件夹
cd build    # 进入这个文件夹
cmake ..    # 由于当前在build文件夹里，所以使用..来且切换到工程文件夹，并使用工程文件夹下的CMakeLists.txt配置编译Make
make -j4    # 使用Make调用GCC进行编译，使用4个线程进行编译
./Class #由于CMakeLists.txt里指定的工程名为"xxxx"，这句话的意思就是执行编译完成后的文件

#使用 sudo bash build.sh 运行shell脚本