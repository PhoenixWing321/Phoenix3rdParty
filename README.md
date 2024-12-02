# Third Party  

# Submodules
- Catch2

- 3rdParty/spdlog

	- url: https://github.com/gabime/spdlog

- 3rdParty/nlohmann_json
  Json for Modern C++

  - url: https://github.com/nlohmann/json.git

- glm
  - https://gitee.com/github-transport/glm.git

- Eigen
  - https://gitlab.com/libeigen/eigen.git

- rapidobj
  - https://github.com/guybrush77/rapidobj
```
git submodule add https://gitlab.com/libeigen/eigen.git
git submodule add https://gitee.com/github-transport/glm.git
git submodule add https://github.com/guybrush77/rapidobj
git submodule add https://github.com/gabime/spdlog


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

