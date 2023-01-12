import os
# os.mkdir('myfolder') == create a single folder

# os.makedirs("fol1/fol2") == create a nested folder

# os.rmdir("myfolder") == delete a single folder 

# os.rmdir("fol1/fol2") == delete a folder inside fol1 

# os.rmdir("fol1") == delete a folder

print(os.path.exists("hello.txt")) #to go back in folder we need to use this
# (../hello.txt) 

print(os.path.isdir("../fol1"))