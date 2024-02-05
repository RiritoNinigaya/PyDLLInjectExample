from pymem.process import inject_dll #It is Inject DLL Function for you're DLL File
from pymem import Pymem

def Main():
    process_name_as_notepad = Pymem("notepad.exe")
    dll_path = input("Please Write You're Folder from DLL File: ")
    dll_bytes = bytes(dll_path, "utf-8")
    inject_dll(process_name_as_notepad.process_handle, dll_bytes)
if __name__ == "__main__":
    Main() #Let's Test This Inject Method!!! :D