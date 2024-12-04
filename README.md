# Third Party  

# Submodules
- Catch2

- 3rdParty/spdlog

	- url: https://github.com/gabime/spdlog

- 3rdParty/nlohmann_json
  Json for Modern C++

  - url: https://github.com/nlohmann/json.git

- glm
  - https://github.com/g-truc/glm.git
  - https://gitee.com/github-transport/glm.git

- Eigen
  - https://gitlab.com/libeigen/eigen.git

- rapidobj
  - https://github.com/guybrush77/rapidobj


```
git submodule add https://gitlab.com/libeigen/eigen.git
git submodule add https://gitee.com/github-transport/glm.git
git submodule add https://github.com/guybrush77/rapidobj.git
git submodule add https://github.com/gabime/spdlog.git

- 希望添加同时，不要检出，下面2句都没有成功
git submodule add --no-checkout https://gitlab.com/libeigen/eigen.git
git submodule add --no-fetch https://github.com/gabime/spdlog.git

# CHECKOUT
git submodule update --init


```
# Surport projects
- CPUPathTracing

  - url: [https://github.com/PhoenixWing321/CPUPathTracing.git](https://github.com/PhoenixWing321/CPUPathTracing.git)

- PhoenixMath

  - url: [https://github.com/PhoenixWing321/CPUPathTracing.git](https://github.com/PhoenixWing321/CPUPathTracing.git)
# 3rdParty

same level folder with `PhoenixMath`

```
workspace
├─PhoenixMath
├─CPUPathTracing
└─3rdParty
   ├──catch2
   │    └──catch.hpp
   ├──eigen
   │    └──Eigen
   ├──glm
   │    └──glm/glm.hpp
   ├──nlohmann
   │    └──json.hpp
   └──eigen
        └──Eigen/Dense
```

# Cmake Build

## windows Steps 编译步骤
- vscode DO NOT use Ninja tools
- Use VsCode Cmake Tools to initial Build folder
- use `bldAll.bat` to build all, following is the output libs
  - .\build\glm\glm\Debug\glm.lib
  - .\build\glm\glm\Release\glm.lib
- run `linkPublish.bat` to link libs to publish folder
  - publish\Debug\glm.lib
  - publish\Debug\CPUPathTracing.lib
  - publish\Debug\PhoenixMath.lib
  - publish\Release\glm.lib
  - publish\Release\CPUPathTracing.lib
  - publish\Release\PhoenixMath.lib