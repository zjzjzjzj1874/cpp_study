## C++程序单源文件编译

- 直接编译
```shell
g++ demo.cpp -o demo
```
> 如果不指定`-o`,则输出文件为`a.out`

- Makefile编译
```shell
# 编写CMakeLists.txt文件，
# 创建编译目录
mkcd build

# 构建
cmake ..

make

# 可执行文件运行
./demo
```
