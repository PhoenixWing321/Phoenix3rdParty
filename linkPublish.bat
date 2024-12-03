:: debug
cd /d %~dp0publish\Debug
del glm.lib
del PhoenixMath.lib
del CPUPathTracing.lib
mklink glm.lib %~dp0build\glm\glm\glm.lib 
mklink PhoenixMath.lib %~dp0..\PhoenixMath\build\Phoenix\Math\Debug\PhoenixMath.lib
mklink CPUPathTracing.lib %~dp0..\CPUPathTracing\build\source\Debug\CPUPathTracing.lib

:: Release
cd /d %~dp0publish\Release
del glm.lib
del PhoenixMath.lib
del CPUPathTracing.lib
mklink glm.lib %~dp0build\glm\glm\glm.lib  
mklink PhoenixMath.lib %~dp0..\PhoenixMath\build\Phoenix\Math\Release\PhoenixMath.lib
mklink CPUPathTracing.lib %~dp0..\CPUPathTracing\build\source\Release\CPUPathTracing.lib

cd /d %~dp0