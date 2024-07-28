
# Lambda-Engine

Lambda-engine is a solo game engine project I am designing mostly for fun and also to learn more about programming. Lambda-engine is currently only being developed on and for Linux, however I plan to expand to other operating systems eventually.




## About/How to navigate
Lambda-engine is a game engine built as a static library written in C++ that is meant to be built into a target application (the game). All the source code for the engine can be found under the [engine](https://github.com/CletusG/lambda-engine/tree/master/engine) folder. In the [tests](https://github.com/GavinAlligood/lambda-engine/tree/master/tests/) folder, there are/will be various examples of projects created using Lambda engine.  

Note about the style of Lambda classes: I prefix each class that belongs to Lambda with a lowercase L because in VSCode, it looks similar to the greek symbol lambda


## How to build in VSCode

**Prerequisites**: Make sure you have installed libglfw3-dev through package manager

To build Lambda engine yourself, download the repository either manually or through git, and open Visual Studio Code in the main folder (lambda-engine). Lambda uses CMake to build project files, so the easiest way to configure and build the project is to download [CMakeTools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools) for VSCode and run CMake:Configure and CMake:Build under the command palette (Under View->Command Palette). If this is undesirable then the commands to manually configure and build the project should be as follows (with {YOUR LAMBDA DIRECTORY} being something like /home/user/lambda-engine):

Configure:
```/usr/bin/cmake -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE --no-warn-unused-cli -S{YOUR LAMBDA DIRECTORY} -B{YOUR LAMBDA DIRECTORY}/build -G "Unix Makefiles"```

Build:
```/usr/bin/cmake --build {YOUR LAMBDA DIRECTORY}/build --config Debug --target all -j 6 --```

Run DemoApplication: ```./build/DemoApplication```
## Learn about game engines
Here are some great resources I've used to learn more about writing game engines

 - [LearnOpenGL by Joey de Vries](https://learnopengl.com/About)
 - [TheCherno (Yan Chernikov) on YouTube](https://www.youtube.com/@TheCherno/playlists)
 - [C++ Game Development 2 by Suraj Sharma on YouTube](https://www.youtube.com/watch?v=3pLmPXzb31s&list=PL6xSOsbVA1eY06RyJuIVWc6tP8hIDiId8)

Other Engines:
 - [Hazel](https://github.com/TheCherno/Hazel)
 - [Godot](https://github.com/godotengine/godot)
 - [HPL1Engine (old)](https://github.com/FrictionalGames/HPL1Engine)
 - [Valve's leaked source-engine](https://github.com/nillerusr/source-engine)
