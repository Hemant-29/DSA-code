import os

folders = []
all_files = (os.listdir())
complete_file_list = []
exe_address_list = []

for i in all_files:
    if ('.' in i):
        complete_file_list.append(os.getcwd()+"\\"+i)
    else:
        folders.append(os.getcwd()+"\\"+i)


for i in folders:

    for j in os.listdir(i):
        complete_file_list.append(i+"\\"+j)
    #     print(i + "\\" + j)

count = 0
for i in complete_file_list:
    count += 1
    if (os.path.splitext(i)[1] == ".exe"):
        exe_address_list.append(i)

for i in exe_address_list:
    os.remove(i)
    pass

for i in exe_address_list:
    print("This file was deleted: ", i)

print("Total files count :", count)
