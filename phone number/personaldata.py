"""
Email Extraction and Name Extraction from Text File

This Python script extracts email addresses and corresponding names (based on common patterns in email addresses) from a text file. It provides functions to read text from a file, extract email addresses using regular expressions, and extract names from email addresses without mapping. The extracted email addresses and names are then printed for further processing.

Author: ziani abdeldajlil


Usage:
- Ensure the text file containing the data is specified in the file_path variable.
- Run the script to extract email addresses and corresponding names.
"""

import re

def extract_emails(text):
    email_pattern = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b'
    emails = re.findall(email_pattern, text)
    return emails

def read_text_from_file(file_path):
    try:
        with open(file_path, 'r') as file:
            return file.read()
    except FileNotFoundError:
        print("File not found:", file_path)
        return None

def get_names_from_emails(emails):
    names = []
    for email in emails:
        name = re.split('@|\.', email)[0]  # Splitting at '@' or '.' and taking the first part
        if name:
            
            names.append(name)#appends extraccted name to the list names[]
    return names

# Example usage:
file_path = 'E:/selenium/python/script/phone number/data.txt'
text = read_text_from_file(file_path)

if text:
    print("Text read from file:")
    print(text)
    
    extracted_emails = extract_emails(text)
    if extracted_emails:
        print("\n\t\t\tEmail addresses found in the text:")
        for email in extracted_emails:
            print(email)
        
        names = get_names_from_emails(extracted_emails)
        if names:
            print("\t\t\tNames corresponding to emails:")
            for name in names:
                print(name)
        else:
            print("\nNo names found for the emails.")
    else:
        print("\nNo email addresses found in the text.")
