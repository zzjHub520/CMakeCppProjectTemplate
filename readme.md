```
.
├── 3rdparty                # 第三方库源码依赖和库依赖存放位置
│   ├── CMakeLists.txt      # 第三方库源码依赖编译CMakeLists文件
│   ├── spdlog              # 源码依赖示例项目spdlog(github可搜索)
│   └── target              # 库依赖存放目录
│       ├── linux_armv7-a   # 以平台和架构命名区分
│       │   ├── include     # 头文件存放目录
│       │   └── lib         # 库文件存放目录
│       └── linux_x86-64
│           ├── include
│           └── lib
├── cmake                   # 存放项目相关的cmakem模块文件
│   ├── load_3rdparty.cmake
│   ├── messagecolor.cmake
│   ├── toolchain_options.cmake
│   └── utils.cmake
├── CMakeLists.txt          # 项目根目录CMakeLists文件，cmake入口文件
├── conf                    # 项目配置文件存放目录
├── doc                     # 项目文档存放目录
├── platforms               # 项目平台性相关内容存放目录，包括交叉编译
│   └── linux
│       └── arm.himix200.cmake
├── README.md               # 项目说明
├── scripts                 # 相关脚本存放目录，包括持续集成和部署相关
├── src                     # 项目源码目录
│   ├── CMakeLists.txt
│   ├── common
│   ├── logger
│   └── main
└── tests                   # 测试示例源码存放目录
    ├── CMakeLists.txt
    └── test_logger.cpp
```

