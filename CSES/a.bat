@REM powershell "Measure-Command { & $(Split-Path -Path %1) | Out-Host }"
@REM cd $(Split-Path -Path %1); Measure-Command { & $(Split-Path -Path %1 -Leaf -Resolve) | Out-Host }