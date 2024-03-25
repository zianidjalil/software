"""
phone numbers's informations 

This Python script shows the phone numbers's company and the country so it helps the security system to get the scams in formation
once we know the company we can contact the company to get the sumers informations 
Author: ziani abdeldjalil
make sure to install pip and phonenumbers package
"""


import phonenumbers
from phonenumbers import geocoder, carrier

def get_phone_info(phone_number):
    try:
        parsed_number = phonenumbers.parse(phone_number, None)
        country = geocoder.description_for_number(parsed_number, "fr")
        
        carrier_name = carrier.name_for_number(parsed_number, "fr")
        
        
        
        
        print("Phone Number:", phone_number)
        print("Country:", country)
        print("Carrier:", carrier_name)
    except phonenumbers.phonenumberutil.NumberParseException as e:
        print("Error:", e)

# Example usage:
phone_number = input("Enter phone number (including country code): ")
get_phone_info(phone_number)