#adding this comment line just to check the git behavior



def merge_list (list1,list2):
    
    unique3 = []
    list3 = []
    list3 = list1 + list2
    for x in list3 :
        if x not in unique3 :
            unique3.append(x)
    
    unique3.sort()        
    print("The mergerd sorted array is : ")            
    print(unique3)   


list1 = []
list2 = []
unique1 = []
unique2 = []

#Taking input for size for list 1 :
size1 = int(input("Enter the size of the first list : "))



#Taking Element input for list 1 :
for i in range (size1):
    num = int(input("Enter the number : "))
    list1.append(num)

#printing list 1 : 
print("The 1st original list is : ") 
print(list1)
print("The first Unique list is : ") 
for x in list1 :
    if x not in unique1 :
        unique1.append(x)
print(unique1)        

#Taking size for list 2 : 
size2 = int(input("Enter the size of the second list : "))

#Taking element for the list 2 : 
for i in range (size2):
    num = int(input("Enter the number : "))
    list2.append(num)

#Printing list 2 : 
print("The 2nd original list is : ") 
print(list2)
print("The 2nd Unique list is : ") 

for x in list2 :
    if x not in unique2 :
        unique2.append(x)
print(unique2)        

merge_list(unique1,unique2)
#Hi This is the first file that is committed and I am tracking this file for the first time.   
#trying to commit using vs code in github
