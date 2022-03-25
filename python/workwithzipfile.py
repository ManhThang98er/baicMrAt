import zipfile
file_name = "D:\workspace\python\my_python_files.zip"
with zipfile.ZipFile(file_name, mode="r") as archive:
    #archive.printdir()
    print(archive.namelist())
    