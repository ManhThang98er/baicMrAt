import zipfile

# Open a zip file at the given filepath. If it doesn't exist, create one.
# If the directory does not exist, it fails with FileNotFoundError
filepath = "my_python_files.zip"
with zipfile.ZipFile(filepath, 'a') as zipf:
    # Add a file located at the source_path to the destination within the zip
    # file. It will overwrite existing files if the names collide, but it
    # will give a warning
    a = 'new_file.txt'
    
    zipf.write(a)
    
with zipfile.ZipFile(filepath, 'r') as zipf:  
    print(zipf.namelist())  