#!/bin/bash

# 请修改protoc为你要使用的版本protoc
# export LD_LIBRARY_PATH=/usr/lib # 32位的库用这个
export LD_LIBRARY_PATH=/usr/local/lib64
protoc=/usr/local/bin/protoc

# cd onnx

echo Create directory "pbout"
rm -rf pbout
mkdir -p pbout

$protoc -I. yolov5_service.proto --cpp_out=pbout --grpc_out=pbout --plugin=protoc-gen-grpc=`which grpc_cpp_plugin`

echo Copy pbout/yolov5_service.pb.cc to ../src/yolov5_service.pb.cpp
cp pbout/yolov5_service.pb.cc           ../src/yolov5_service.pb.cpp

echo Copy pbout/yolov5_service.grpc.pb.cc to ../src/yolov5_service.grpc.pb.cpp
cp pbout/yolov5_service.grpc.pb.cc ../src/yolov5_service.grpc.pb.cpp

echo Copy pbout/yolov5_service.pb.h to ../include/yolov5_service.pb.h
cp pbout/yolov5_service.pb.h           ../include/yolov5_service.pb.h

echo Copy pbout/yolov5_service.grpc.pb.h to ../include/yolov5_service.grpc.pb.h
cp pbout/yolov5_service.grpc.pb.h ../include/yolov5_service.grpc.pb.h

echo Remove directory "pbout"
rm -rf pbout