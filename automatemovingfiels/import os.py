import os
import shutil
import magic

def create_folders():
    folders = ['Text', 'Images', 'Scripts']
    for folder in folders:
        if not os.path.exists(folder):
            os.makedirs(folder)

def get_file_type(file_path):
    file_mime = magic.Magic(mime=True)
    mime_type = file_mime.from_file(file_path)
    if 'text' in mime_type:
        return 'Text'
    elif 'image' in mime_type:
        return 'Images'
    elif 'script' in mime_type:
        return 'Scripts'
    else:
        return None

def organize_files(source_dir):
    for root, dirs, files in os.walk(source_dir):
        for file in files:
            file_path = os.path.join(root, file)
            file_type = get_file_type(file_path)
            if file_type:
                destination_folder = os.path.join(os.getcwd(), file_type)
                if not os.path.exists(destination_folder):
                    os.makedirs(destination_folder)
                shutil.move(file_path, destination_folder)

if __name__ == "__main__":
    source_directory = input("Enter the directory to organize files from: ")
    create_folders()
    organize_files(source_directory)
    print("Files organized successfully!")
