#include <torch/torch.h>
#include <torch/cuda.h>
#include <iostream>

int main() {
    // torch::Tensor tensor = torch::rand({2, 3});
    // std::cout << tensor << std::endl;
    std::cout << "CUDA DEVICE COUNT: " << torch::cuda::device_count() << std::endl;
    if (torch::cuda::is_available()) {
        std::cout << "CUDA is available! Inference on GPU." << std::endl;
    }
    if (torch::cuda::cudnn_is_available()) {
        std::cout << "CUDNN is available! Inference on GPU." << std::endl;
    }
    return 0;
}
