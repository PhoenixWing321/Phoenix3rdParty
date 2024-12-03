:: debug
cd /d %~dp0publish\Debug
mklink glm.lib %~dp0build\glm\glm\glm.lib 
mklink PhoenixMath.lib %~dp0..\PhoenixMath\build\Phoenix\Math\Debug\PhoenixMath.lib
mklink CPUPathTracing.lib %~dp0..\CPUPathTracing\build\source\CPUPathTracing.lib

:: Release
cd /d %~dp0publish\Release
mklink glm.lib %~dp0build\glm\glm\glm.lib  
mklink PhoenixMath.lib %~dp0..\PhoenixMath\build\Phoenix\Math\Release\PhoenixMath.lib
mklink CPUPathTracing.lib %~dp0..\CPUPathTracing\build\source\CPUPathTracing.lib