git fetch
git checkout develop
git pull

Set-Location $PSScriptRoot\eigen
git fetch
git checkout master
git pull

Set-Location $PSScriptRoot\glm
git fetch
git checkout master
git pull

Set-Location $PSScriptRoot\rapidobj
git fetch
git checkout master
git pull

Set-Location $PSScriptRoot
