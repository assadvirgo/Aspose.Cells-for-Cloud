SET CSCPATH=%SYSTEMROOT%\Microsoft.NET\Framework\v4.0.30319
%CSCPATH%\csc /reference:bin/Newtonsoft.Json.dll /target:library /out:bin/Com.Aspose.Cells.dll /recurse:src\*.cs /doc:bin/Com.Aspose.Cells.xml
