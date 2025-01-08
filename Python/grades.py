# Taking percentage input from children and assign grades?

#taking perectage input from student 
percentage =int(input("Enter your percentage: "))
#Converting it into grades
if percentage <=100 and percentage > 80 :
	print("  Very Good")
elif percentage <=80 and percentage > 60 :
	print("  Good")
elif percentage <=60 and percentage > 40 :
	print("  Average")
elif percentage <=40 :
	print("  Fail")
else  :
	print("Invalid Input")