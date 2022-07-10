# Program: Image to ASCII Text Converter
# Name   : Brandon Qilin HUng
# Date   : 07-09-2022

# Libraries
from PIL import Image


# Global Variable(s)
ASCII_CHARS = ["@", "#", "S", "%", "?", "*", "+", ";", ":", ",", "."]


# Function(s)
def resize_image(image, new_width = 100):
    width, height = image.size
    ratio = height / width
    new_height = int(new_width * ratio)
    resized_image = image.resize((new_width, new_height))
    return(resized_image)


def grayify(image):
    grayscale_image = image.convert("L")

    return(grayscale_image)



def pixels_to_ASCII(image):
    pixels = image.getdata()
    characters = "".join([ASCII_CHARS[pixel//25] for pixel in pixels])

    return(characters)

def main(new_width = 100):
    path = input("Enter a valid pathname to an image:\n")
    try:
        image = Image.open(path)
    except:
        print(path, " is not a valid pathname to an image.")
        return
  
    new_image_data = pixels_to_ASCII(grayify(resize_image(image)))

    pixel_count = len(new_image_data)
    ascii_image = "\n".join([new_image_data[index:(index+new_width)] for index in range(0, pixel_count, new_width)])

    print(ascii_image)

    with open("ascii_image.txt", "w") as f:
        f.write(ascii_image)
        print("File Saved.")


# Run Program
main()