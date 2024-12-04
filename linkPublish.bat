:: debug
cd /d %~dp0publish\Debug
del glm.lib >nul 2>nul
del PhoenixMath.lib  >nul 2>nul
del CPUPathTracing.lib >nul 2>nul
mklink glm.lib %~dp0build\glm\glm\Debug\glm.lib 
mklink PhoenixMath.lib %~dp0..\PhoenixMath\build\Phoenix\Math\Debug\PhoenixMath.lib
mklink CPUPathTracing.lib %~dp0..\CPUPathTracing\build\source\Debug\CPUPathTracing.lib

:: Release
cd /d %~dp0publish\Release
del glm.lib >nul 2>nul
del PhoenixMath.lib >nul 2>nul
del CPUPathTracing.lib >nul 2>nul
mklink glm.lib %~dp0build\glm\glm\Release\glm.lib  
mklink PhoenixMath.lib %~dp0..\PhoenixMath\build\Phoenix\Math\Release\PhoenixMath.lib
mklink CPUPathTracing.lib %~dp0..\CPUPathTracing\build\source\Release\CPUPathTracing.lib

cd /d %~dp0