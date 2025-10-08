# cpp_for_python

## 说明
python调用c++代码

## 开始

### 1.获取pybind11代码并且安装
```bash
git clone https://github.com/pybind/pybind11.git
cd pybind11
git checkout v3.0.1
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=path_to_cpp_learning/cpp_for_python/deps
make -j8
mkdir ../../deps
sudo make install
```
此时在deps目录下会有include和share目录

### 2.创建python环境
```bash
conda create -n py312 python=3.12
conda activate py312
```

### 3.编写代码
写在了code目录下面

### 4.编译运行代码
```bash
cd code
sh build.sh
python test_example.py
```