# YOLOv5 TensorRT Inference Service
## Overview
This project implements a YOLOv5 inference service using TensorRT. It includes a server that performs object detection and a client that sends images to the server for processing. The project is structured to use CUDA for GPU acceleration and gRPC for communication between the client and server.

## Project Structure
- CMakeLists.txt: CMake configuration file.
- include/: Header files for the project.
- protos/: Protocol Buffer and gRPC service definitions.
- src/: Source files for the project.
- resources/: Additional resources (e.g., model files, configuration).
- LICENSE: License file.
- README.md: This file.

## Key Components
- YoloFactory: Factory class for creating YOLO instances.
- YoloPool: Pool of YOLO instances for efficient resource management.
- InferenceManager: Manages inference tasks and coordinates resources.
- server.cpp: gRPC server implementation.
- client.cpp: gRPC client implementation.

## Building the Project
### Prerequisites
CMake 3.12 or higher
CUDA Toolkit
TensorRT
OpenCV
gRPC and Protocol Buffers
### Build Steps
1. Clone the repository:
```bash
git clone https://github.com/zidanewenqsh/grpc_tensorrt_yolov5.git
```
2. Navigate to the project directory:
```bash
cd yolov5_tensorrt
```
3. Create a build directory and navigate into it:
```bash
mkdir build && cd build
```
4. Run CMake to configure the project:
```bash
cmake ..
```
5. Build the project:
```bash
make
```
## Running the Service
### Starting the Server
Run the server executable from the build directory:

```bash
./server
```
### Using the Client
Run the client executable with the path to the image:
```bash
./client
```
## License
This project is licensed under the LICENSE file in the root directory of this source tree.