# Write a python program to find profit and loss?
#taking cp and sp as input
cp=float(input("  Enter the Cost Price: "))
sp=float(input("  Enter the Selling Price: "))
if cp > sp :
	loss = cp - sp 
	print("  You Incurred Loss: ", loss)
elif cp == sp :
	print("  No Profit no Loss")
else :
	profit= sp - cp
	print("  You made Profit: ",profit)
