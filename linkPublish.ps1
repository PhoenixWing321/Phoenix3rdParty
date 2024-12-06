# debug
Set-Location -Path "$PSScriptRoot\publish\Debug"
Remove -Item -Path glm.lib -ErrorAction SilentlyContinue
Remove-Item -Path PhoenixMath.lib -ErrorAction SilentlyContinue
Remove-Item -Path CPUPathTracing.lib -ErrorAction SilentlyContinue
New-Item -ItemType SymbolicLink -Path glm.lib -Target "$PSScriptRoot\build\glm\glm\Debug\glm.lib"
New-Item -ItemType SymbolicLink -Path PhoenixMath.lib -Target "$PSScriptRoot\..\PhoenixMath\build\Phoenix\Math\Debug\PhoenixMath.lib"
New-Item -ItemType SymbolicLink -Path CPUPathTracing.lib -Target "$PSScriptRoot\..\CPUPathTracing\build\source\Debug\CPUPathTracing.lib"

# Release
Set-Location -Path "$PSScriptRoot\publish\Release"
Remove-Item -Path glm.lib -ErrorAction SilentlyContinue
Remove-Item -Path PhoenixMath.lib -ErrorAction SilentlyContinue
Remove-Item -Path CPUPathTracing.lib -ErrorAction SilentlyContinue
New-Item -ItemType SymbolicLink -Path glm.lib -Target "$PSScriptRoot\build\glm\glm\Release\glm.lib"
New-Item -ItemType SymbolicLink -Path PhoenixMath.lib -Target "$PSScriptRoot\..\PhoenixMath\build\Phoenix\Math\Release\PhoenixMath.lib"
New-Item -ItemType SymbolicLink -Path CPUPathTracing.lib -Target "$PSScriptRoot\..\CPUPathTracing\build\source\Release\CPUPathTracing.lib"

Set-Location -Path "$PSScriptRoot"
