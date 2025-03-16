chdir %~dp0

call .\setDirectoryVariables.bat


echo "Begin copying client executable"

XCOPY /Y /B "..\Corum Online SRC\CorumOnlineProject\Debug\CorumOnlineResult.exe" "%CENTRALIZED_OUTPUT_DIR%\CorumOnlineResult.exe*"
XCOPY /Y /B "..\Corum Online SRC\SS3DDLLs\SS3DExecutiveForCorum.dll" "%CENTRALIZED_OUTPUT_DIR%\SS3DExecutiveForCorum.dll*"
XCOPY /Y /B "..\Corum Online SRC\SS3DDLLs\SS3DFileStorage.dll" "%CENTRALIZED_OUTPUT_DIR%\SS3DFileStorage.dll*"
XCOPY /Y /B "..\Corum Online SRC\SS3DDLLs\SS3DGeometryForCorum.dll" "%CENTRALIZED_OUTPUT_DIR%\SS3DGeometryForCorum.dll*"
XCOPY /Y /B "..\Corum Online SRC\SS3DDLLs\SS3DGFunc.dll" "%CENTRALIZED_OUTPUT_DIR%\SS3DGFunc.dll*"
XCOPY /Y /B "..\Corum Online SRC\SS3DDLLs\SS3DRendererForCorum.dll" "%CENTRALIZED_OUTPUT_DIR%\SS3DRendererForCorum.dll*"

echo "copying done"

.\installProducts.bat