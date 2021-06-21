from cs50 import get_string


def computeL (letters , words):
    L = (letters / words * 100)
    return L
    
    
    
def computeS (sentences , words):
    S = (sentences / words * 100)
    return S

text = get_string("Text: ")

letters = 0
sentences = 0
words = 0


for  i in range(len(text)):
    if text[i] != ' ' and text[i].isalpha:
        letters += 1
    if text[i] == ' ':
        words += 1
    if text[i] == '.' or text[i] == '!' or text[i] == '?':
        sentences += 1

words = words + 1

index = (0.0588 * computeL(letters , words) - 0.296 * computeS(sentences , words) - 15.8)
index = int(index)

if index<1:
    print("Before Grade 1")
    
elif index>16:
    print("Grade 16+")
    
else:
    print(f"Grade {index}")



