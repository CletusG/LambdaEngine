#!/bin/sh

cmake -B bin/LambdaEngine/
cmake --build bin/LambdaEngine/

cd DemoApplication/
cmake -B ../bin/DemoApplication
cmake --build ../bin/DemoApplication

cd ../
cd bin/DemoApplication
./Demo

