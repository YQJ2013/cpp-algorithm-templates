@echo off
setlocal enabledelayedexpansion
echo ========================================
echo   C++ Algorithm Templates - Build All
echo ========================================
echo.
for /r %%f in (*.cpp) do (
    g++ -std=c++17 -O2 "%%f" -o "%%~dpnf.exe"
    if errorlevel 1 (
        echo [FAILED] %%~nxf
    ) else (
        echo [OK] %%~nxf
    )
)
echo.
echo Done. Executables are placed next to each source file.
pause