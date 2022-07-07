# import OS module
import os

# Get the list of all files and directories
path = "./"

for x in os.listdir(path):
  if x.endswith(".txt"):
    # Prints only text file present in My Folder
    print(x)
