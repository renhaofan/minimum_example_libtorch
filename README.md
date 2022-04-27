# Introduction
This is a cmake demo projects using libtorch to interface.
 
Make sure the pytorch version(python) matches the libtorch version(C++). 

libtorch history version refer to this [blog](https://blog.csdn.net/weixin_43742643/article/details/114156298#Precxx11_ABI_157).

```bash
$ gcc --version
gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
```
# Download
## libtorch-cpu
```bash
wget https://download.pytorch.org/libtorch/nightly/cpu/libtorch-shared-with-deps-latest.zip
unzip libtorch-shared-with-deps-latest.zip
mv libtorch libtorch_cpu
rm libtorch-shared-with-deps-latest.zip
```
## libtorch-GPU
Pre-cxx11 ABI
```bash
wget https://download.pytorch.org/libtorch/cu102/libtorch-shared-with-deps-1.6.0.zip
unzip libtorch-shared-with-deps-1.6.0.zip
mv libtorch libtorch_1.6.0_cu102
```
