@echo off

set recipe=%~1

call :%recipe% %* || (
    echo "Usage: .\make.bat <recipe> [recipe-arguments]" >&2
    exit /B 1
)

exit /B

:build
    gcc "%~2" -o "%~n2"
    exit /B

:clean
    del *.exe
    exit /B