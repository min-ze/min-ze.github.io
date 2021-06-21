import sys
import csv


if len(sys.argv) != 3:
    sys.exit("Usage: python dna.py DATABASE SEQUENCE")


data = sys.argv[1]
with open(data , "r") as csvfile:
        database = csv.DictReader(csvfile)
        dict_list = list(database)
    

seq = sys.argv[2]
with open(seq) as file:
    sequence = file.read()

max_count = []

for i in range(1 , len(database.fieldnames)):
    STR = database.fieldnames[i]
    max_count.append(0)
    
    for j in range(len(sequence)):
        STR_count = 0
        
        if sequence[j:j+len(STR)] == STR:
            k = 0
            
            while sequence[(j+k):j+k+len(STR)] == STR:
                STR_count += 1
                k += len(STR)
                
            if STR_count > max_count[i-1]:
                max_count[i-1] = STR_count
                
            
for i in range(len(dict_list)):
    matches = 0
    
    for j in range(1 , len(database.fieldnames)):
        if int(max_count[j-1]) == int(dict_list[i][database.fieldnames[j]]):
            matches += 1
            
        if matches == (len(database.fieldnames) - 1):
            print(dict_list[i]['name'])
            exit(0)
                

print("No Match")
